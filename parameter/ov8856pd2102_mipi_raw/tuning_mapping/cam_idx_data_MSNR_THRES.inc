#define IDX_DATA_MSNR_THRES_DIM_NS    8
#define IDX_DATA_MSNR_THRES_FACTOR_SZ    7
#define IDX_DATA_MSNR_THRES_ENTRY_NS    14

static unsigned int _cam_data_entry_MSNR_THRES_key0000[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X0000CFF8, 0X00000A00, };
static unsigned int _cam_data_entry_MSNR_THRES_key0001[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X0000CFF8, 0X00001200, };
static unsigned int _cam_data_entry_MSNR_THRES_key0002[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X0000CFF8, 0X00000C00, };
static unsigned int _cam_data_entry_MSNR_THRES_key0003[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X0000CFF8, 0X00001400, };
static unsigned int _cam_data_entry_MSNR_THRES_key0004[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X0000B7FF, 0X00000E00, };
static unsigned int _cam_data_entry_MSNR_THRES_key0005[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X0000B7FF, 0X00001600, };
static unsigned int _cam_data_entry_MSNR_THRES_key0006[] = {0X001FF000, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X01000FFF, 0X00000E00, };
static unsigned int _cam_data_entry_MSNR_THRES_key0007[] = {0X001FF000, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X01000FFF, 0X00001600, };
static unsigned int _cam_data_entry_MSNR_THRES_key0008[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X40000000, 0X0000FFF8, 0X00007E00, };
static unsigned int _cam_data_entry_MSNR_THRES_key0009[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X08000000, 0X0400F878, 0X00007E08, };
static unsigned int _cam_data_entry_MSNR_THRES_key0010[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X00007FF8, 0X00007E20, };
static unsigned int _cam_data_entry_MSNR_THRES_key0011[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X00407FE8, 0X00000E00, };
static unsigned int _cam_data_entry_MSNR_THRES_key0012[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X06000000, 0X00407FE8, 0X00001600, };
static unsigned int _cam_data_entry_MSNR_THRES_key0013[] = {0X001FF001, 0X00000000, 0X00000000, 0X00000000, 0X04000FF0, 0XFFFFFFF8, 0X00007FFF, };

static IDX_MASK_ENTRY _cam_data_entry_MSNR_THRES[IDX_DATA_MSNR_THRES_ENTRY_NS] =
{
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0000, 0, 0, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0001, 0, 1, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0002, 1, 2, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0003, 1, 3, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0004, 2, 4, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0005, 2, 5, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0006, 3, 14, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0007, 4, 15, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0008, 0, 24, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0009, 5, 25, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0010, 6, 27, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0011, 7, 28, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0012, 8, 29, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0013, 0, 30, 2, 0},
};

static unsigned short _cam_data_dims_MSNR_THRES[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_FrontBin,
    EDim_Size,
    EDim_Flash,
    EDim_App,
    EDim_FaceDetection,
    EDim_Zoom,
};

static unsigned short _cam_data_expand_MSNR_THRES[] = 
{0, 0, 0};

const IDX_MASK_T cam_data_MSNR_THRES =
{
    {IDX_ALGO_MASK, IDX_DATA_MSNR_THRES_DIM_NS, (unsigned short*)&_cam_data_dims_MSNR_THRES, (unsigned short*)&_cam_data_expand_MSNR_THRES},
    {IDX_DATA_MSNR_THRES_ENTRY_NS, IDX_DATA_MSNR_THRES_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_MSNR_THRES}
};