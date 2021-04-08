#define IDX_DATA_DSDN_DIM_NS    7
#define IDX_DATA_DSDN_FACTOR_SZ    7
#define IDX_DATA_DSDN_ENTRY_NS    15

static unsigned int _cam_data_entry_DSDN_key0000[] = {0X00000001, 0X00000000, 0X00004000, 0X00000000, 0X06001000, 0X00100908, 0X000000E0, };
static unsigned int _cam_data_entry_DSDN_key0001[] = {0X00000001, 0X00000000, 0X00004000, 0X00000000, 0X06001000, 0X00100908, 0X00000360, };
static unsigned int _cam_data_entry_DSDN_key0002[] = {0X00000001, 0X00000000, 0X00004000, 0X00000000, 0X06001000, 0X00100FE8, 0X000000A0, };
static unsigned int _cam_data_entry_DSDN_key0003[] = {0X00000001, 0X00000000, 0X00004000, 0X00000000, 0X06001000, 0X00100FE8, 0X00000320, };
static unsigned int _cam_data_entry_DSDN_key0004[] = {0X00000001, 0X00000000, 0X00004000, 0X00000000, 0X06001000, 0X00100FE8, 0X000000C0, };
static unsigned int _cam_data_entry_DSDN_key0005[] = {0X00000001, 0X00000000, 0X00004000, 0X00000000, 0X06001000, 0X00100FE8, 0X00000340, };
static unsigned int _cam_data_entry_DSDN_key0006[] = {0X00000002, 0X00000000, 0X00008000, 0X00000000, 0X1A001000, 0X00400828, 0X000007E0, };
static unsigned int _cam_data_entry_DSDN_key0007[] = {0X00000000, 0X000FF000, 0X00000000, 0X00000000, 0XFE000000, 0XFFFFFFEF, 0X000007FF, };
static unsigned int _cam_data_entry_DSDN_key0008[] = {0X00000000, 0X10000000, 0X00000000, 0X00000000, 0XFE001000, 0X010007FF, 0X000007E0, };
static unsigned int _cam_data_entry_DSDN_key0009[] = {0X00000000, 0X20000000, 0X00000000, 0X00000000, 0XFE001000, 0X010007FF, 0X000007E0, };
static unsigned int _cam_data_entry_DSDN_key0010[] = {0X00000002, 0X00000000, 0X00008000, 0X00000000, 0X08001000, 0X80400858, 0X000007E0, };
static unsigned int _cam_data_entry_DSDN_key0011[] = {0X00000002, 0X00000000, 0X00008000, 0X00000000, 0X08001000, 0XFFFFFFE8, 0X000007FF, };
static unsigned int _cam_data_entry_DSDN_key0012[] = {0X00000001, 0X00000000, 0X00004000, 0X00000000, 0X06001000, 0X000007F8, 0X000007E2, };
static unsigned int _cam_data_entry_DSDN_key0013[] = {0XFFFFFFFF, 0XFFFFFFFF, 0XFFFFFFFF, 0XFFFFFFFF, 0XC3FFFFFF, 0XFFFFFFFF, 0X000007FF, };
static unsigned int _cam_data_entry_DSDN_key0014[] = {0XFFFFFFFF, 0XFFFFFFFF, 0XFFFFFFFF, 0XFFFFFFFF, 0X39FFFFFF, 0XFFFFFFF8, 0X000007FF, };

static IDX_MASK_ENTRY _cam_data_entry_DSDN[IDX_DATA_DSDN_ENTRY_NS] =
{
    {(unsigned int*)&_cam_data_entry_DSDN_key0000, 0, 6, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0001, 13, 7, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0002, 26, 8, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0003, 39, 9, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0004, 52, 10, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0005, 65, 11, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0006, 78, 12, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0007, 26, 13, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0008, 91, 20, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0009, 91, 21, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0010, 104, 22, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0011, 117, 23, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0012, 130, 26, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0013, 26, 31, 2, 0},
    {(unsigned int*)&_cam_data_entry_DSDN_key0014, 26, 32, 2, 0},
};

static unsigned short _cam_data_dims_DSDN[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_FrontBin,
    EDim_Size,
    EDim_App,
    EDim_FaceDetection,
    EDim_Zoom,
};

static unsigned short _cam_data_expand_DSDN[] = 
{0, 0, 1};

const IDX_MASK_T cam_data_DSDN =
{
    {IDX_ALGO_MASK, IDX_DATA_DSDN_DIM_NS, (unsigned short*)&_cam_data_dims_DSDN, (unsigned short*)&_cam_data_expand_DSDN},
    {IDX_DATA_DSDN_ENTRY_NS, IDX_DATA_DSDN_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_DSDN}
};