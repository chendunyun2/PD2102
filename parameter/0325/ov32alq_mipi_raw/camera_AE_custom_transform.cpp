#include <utils/Log.h>
#include <fcntl.h>
#include <cutils/log.h>
#include <string.h>

#include "camera_custom_nvram.h"
#include "camera_custom_sensor.h"
#include "image_sensor.h"
#include "kd_imgsensor_define.h"
//#include "algorithm/ccu_ae_param.h"

//camera_info_header
#include "camera_info_ov32alqmipiraw.h"

#if MTK_CAM_NEW_NVRAM_SUPPORT
    #include INCLUDE_FILENAME_TUNING_MAPPING
#endif

typedef NSFeature::AECustomTransform<SENSOR_ID, MODULE_INDEX> SensorInfoSingleton_T;

namespace NSFeature {

UINT32 transBinSum_ov32alqmipiraw(VOID* const pData);
UINT32 transATR_ov32alqmipiraw(VOID* const pData);

template <>
UINT32
SensorInfoSingleton_T::
impAECustomTransform(AE_CUSTOM_TRANSFORM_ENUM const AECusFuncType, VOID* const pData) const
{
    switch(AECusFuncType)
    {
        case AE_CUSTOM_TRANSFORM_BINSUM:
            transBinSum_ov32alqmipiraw(pData);
            break;
        case AE_CUSTOM_TRANSFORM_ATR:
            transATR_ov32alqmipiraw(pData);
            break;
        default:
            ALOGD("[impAECustomTransform] undefined function type");
            break;
    }
    return 0;
}

UINT32 transBinSum_ov32alqmipiraw(VOID* const pData)
{
      strBinningSumTrans* pAEData = (strBinningSumTrans*)pData;
      MUINT32 u4BinningSumRatio   = pAEData->u4BinningSumRatio;
      MUINT32 u4Eposuretime       = pAEData->pRealSetting->EvSetting.u4Eposuretime;
      MUINT32 u4AfeGain           = pAEData->pRealSetting->EvSetting.u4AfeGain;
      MUINT32 u4IspGain           = pAEData->pRealSetting->EvSetting.u4IspGain;
      MUINT32 u4ISO               = pAEData->pRealSetting->u4ISO;
      MUINT32 u4MiniISOGain       = pAEData->pAeNVRAM->hw.params.iso_gain;    // Min ISO
      // to do for Binning Sum customization
      // ALOGD("[%s()] + u4Eposuretime:%d u4AfeGain:%d u4IspGain:%d u4ISO:%d\n", __FUNCTION__,
      //     u4Eposuretime, u4AfeGain, u4IspGain, u4ISO);
	  if(u4BinningSumRatio > 10)
	  {
		u4BinningSumRatio = u4BinningSumRatio/10;
		if (u4ISO > u4MiniISOGain * u4BinningSumRatio)
     {
         if (u4IspGain >= AE_GAIN_BASE_ISP * u4BinningSumRatio)
         {
             u4IspGain = u4IspGain / u4BinningSumRatio;
             pAEData->pRealSetting->EvSetting.u4IspGain = u4IspGain;
         }
         else
         {
             u4AfeGain = u4AfeGain * u4IspGain / (AE_GAIN_BASE_ISP * u4BinningSumRatio);
             u4IspGain = AE_GAIN_BASE_ISP;
             pAEData->pRealSetting->EvSetting.u4AfeGain = u4AfeGain;
             pAEData->pRealSetting->EvSetting.u4IspGain = u4IspGain;
         }
         u4ISO = u4ISO / u4BinningSumRatio;
         pAEData->pRealSetting->u4ISO = u4ISO;
     }
     else
     {
         u4Eposuretime = u4Eposuretime / u4BinningSumRatio;
         pAEData->pRealSetting->EvSetting.u4Eposuretime = u4Eposuretime;
     }  
	  }
	  else
	  {
      if (u4ISO > u4MiniISOGain * u4BinningSumRatio)
      {
          if (u4IspGain >= AE_GAIN_BASE_ISP * u4BinningSumRatio)
          {
              u4IspGain = u4IspGain / u4BinningSumRatio;
              pAEData->pRealSetting->EvSetting.u4IspGain = u4IspGain;
          }
          else
          {
              u4AfeGain = u4AfeGain * u4IspGain / (AE_GAIN_BASE_ISP * u4BinningSumRatio);
              u4IspGain = AE_GAIN_BASE_ISP;
              pAEData->pRealSetting->EvSetting.u4AfeGain = u4AfeGain;
              pAEData->pRealSetting->EvSetting.u4IspGain = u4IspGain;
          }
          u4ISO = u4ISO / u4BinningSumRatio;
          pAEData->pRealSetting->u4ISO = u4ISO;
      }
      else if(u4ISO < (u4MiniISOGain * u4BinningSumRatio/2))
      {
          u4Eposuretime = u4Eposuretime / u4BinningSumRatio;
          pAEData->pRealSetting->EvSetting.u4Eposuretime = u4Eposuretime;
      }
	  else
	  {
	      u4Eposuretime = u4Eposuretime / (u4BinningSumRatio/2);
		  u4AfeGain = u4AfeGain * u4IspGain / (AE_GAIN_BASE_ISP * u4BinningSumRatio/2);
          u4IspGain = AE_GAIN_BASE_ISP;
		  u4ISO = u4ISO / (u4BinningSumRatio/2);
		  pAEData->pRealSetting->EvSetting.u4Eposuretime = u4Eposuretime;
		  pAEData->pRealSetting->EvSetting.u4AfeGain = u4AfeGain;
          pAEData->pRealSetting->EvSetting.u4IspGain = u4IspGain;
          pAEData->pRealSetting->u4ISO = u4ISO;
	  }
	  }
      ALOGD("[%s()] - u4Eposuretime:%d u4AfeGain:%d u4IspGain:%d u4ISO:%d u4MiniISO:%d MiniAfeGain:%d MiniIspGain:%d\n", __FUNCTION__,
          u4Eposuretime, u4AfeGain, u4IspGain, u4ISO, u4MiniISOGain, AE_GAIN_BASE_AFE, AE_GAIN_BASE_ISP);
      return 0;
}

UINT32 transATR_ov32alqmipiraw(VOID* const pData)
{
   ALOGE("meimin07");
    strAEOutput* pAEData = (strAEOutput*)pData;
    // to do for ATR customization
    return 0;
}

};  //  NSFeature