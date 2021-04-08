#define IDX_DATA_MFNR_DIM_NS    6
#define IDX_DATA_MFNR_FACTOR_SZ    7
#define IDX_DATA_MFNR_ENTRY_NS    8

static unsigned int _cam_data_entry_MFNR_key0000[] = {0X00000FF0, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X000000C8, 0X0000000A, };
static unsigned int _cam_data_entry_MFNR_key0001[] = {0X00000FF0, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X000000C8, 0X00000012, };
static unsigned int _cam_data_entry_MFNR_key0002[] = {0X00000FF0, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X000000C8, 0X0000000C, };
static unsigned int _cam_data_entry_MFNR_key0003[] = {0X00000FF0, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X000000C8, 0X00000014, };
static unsigned int _cam_data_entry_MFNR_key0004[] = {0X00000FF0, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X000000B7, 0X0000000E, };
static unsigned int _cam_data_entry_MFNR_key0005[] = {0X00000FF0, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X000000B7, 0X00000016, };
static unsigned int _cam_data_entry_MFNR_key0006[] = {0X00000FF0, 0X00000000, 0X00000000, 0X00000000, 0X40000000, 0X000000F8, 0X0000007E, };
static unsigned int _cam_data_entry_MFNR_key0007[] = {0X00000FF0, 0X00000000, 0X00000000, 0X00000000, 0X04000000, 0XFFFFFFF8, 0X0000007F, };

static IDX_MASK_ENTRY _cam_data_entry_MFNR[IDX_DATA_MFNR_ENTRY_NS] =
{
    {(unsigned int*)&_cam_data_entry_MFNR_key0000, 0, 0, 2, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_key0001, 13, 1, 2, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_key0002, 26, 2, 2, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_key0003, 39, 3, 2, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_key0004, 52, 4, 2, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_key0005, 65, 5, 2, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_key0006, 0, 24, 2, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_key0007, 0, 30, 2, 0},
};

static unsigned short _cam_data_dims_MFNR[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_Flash,
    EDim_App,
    EDim_FaceDetection,
    EDim_Zoom,
};

static unsigned short _cam_data_expand_MFNR[] = 
{0, 0, 1};

const IDX_MASK_T cam_data_MFNR =
{
    {IDX_ALGO_MASK, IDX_DATA_MFNR_DIM_NS, (unsigned short*)&_cam_data_dims_MFNR, (unsigned short*)&_cam_data_expand_MFNR},
    {IDX_DATA_MFNR_ENTRY_NS, IDX_DATA_MFNR_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_MFNR}
};