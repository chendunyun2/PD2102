#define IDX_DATA_AF_DIM_NS    11
#define IDX_DATA_AF_FACTOR_SZ    7
#define IDX_DATA_AF_ENTRY_NS    0


static IDX_MASK_ENTRY _cam_data_entry_AF[IDX_DATA_AF_ENTRY_NS] =
{
};

static unsigned short _cam_data_dims_AF[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_FrontBin,
    EDim_Size,
    EDim_Flash,
    EDim_App,
    EDim_FaceDetection,
    EDim_Custom_00,
    EDim_Custom_01,
    EDim_Zoom,
    EDim_IspLV,
};

static unsigned short _cam_data_expand_AF[] = 
{0, 0, 0};

const IDX_MASK_T cam_data_AF =
{
    {IDX_ALGO_MASK, IDX_DATA_AF_DIM_NS, (unsigned short*)&_cam_data_dims_AF, (unsigned short*)&_cam_data_expand_AF},
    {IDX_DATA_AF_ENTRY_NS, IDX_DATA_AF_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_AF}
};