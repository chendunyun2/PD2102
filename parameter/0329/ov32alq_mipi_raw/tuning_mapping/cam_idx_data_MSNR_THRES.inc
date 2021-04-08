#define IDX_DATA_MSNR_THRES_DIM_NS    6
#define IDX_DATA_MSNR_THRES_FACTOR_SZ    7
#define IDX_DATA_MSNR_THRES_ENTRY_NS    14

static unsigned int _cam_data_entry_MSNR_THRES_key0000[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X04000000, 0X000023F8, 0X00000080, };
static unsigned int _cam_data_entry_MSNR_THRES_key0001[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X04000000, 0X000023F8, 0X00000100, };
static unsigned int _cam_data_entry_MSNR_THRES_key0002[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X04000000, 0X002003F8, 0X00000180, };
static unsigned int _cam_data_entry_MSNR_THRES_key0003[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X08000000, 0X01001E08, 0X00000180, };
static unsigned int _cam_data_entry_MSNR_THRES_key0004[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X08000000, 0X01001FF8, 0X00000180, };
static unsigned int _cam_data_entry_MSNR_THRES_key0005[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X004003FF, 0X00000180, };
static unsigned int _cam_data_entry_MSNR_THRES_key0006[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X00002DFF, 0X00000180, };
static unsigned int _cam_data_entry_MSNR_THRES_key0007[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X00200DFF, 0X00000180, };
static unsigned int _cam_data_entry_MSNR_THRES_key0008[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X08001FFF, 0X00000180, };
static unsigned int _cam_data_entry_MSNR_THRES_key0009[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X02000000, 0X00801FF8, 0X00000180, };
static unsigned int _cam_data_entry_MSNR_THRES_key0010[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0XFE000000, 0X40001FFF, 0X00000180, };
static unsigned int _cam_data_entry_MSNR_THRES_key0011[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X02000000, 0X00001FF8, 0X00000188, };
static unsigned int _cam_data_entry_MSNR_THRES_key0012[] = {0X000FF000, 0X00000000, 0X00000000, 0X00000000, 0X02000000, 0X00001FF8, 0X00000181, };
static unsigned int _cam_data_entry_MSNR_THRES_key0013[] = {0X001FF001, 0X00000000, 0X00000000, 0X00000000, 0X04000FF0, 0XFFFFFFF8, 0X000001FF, };

static IDX_MASK_ENTRY _cam_data_entry_MSNR_THRES[IDX_DATA_MSNR_THRES_ENTRY_NS] =
{
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0000, 0, 0, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0001, 1, 2, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0002, 2, 6, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0003, 3, 12, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0004, 4, 13, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0005, 5, 14, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0006, 6, 15, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0007, 7, 17, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0008, 8, 19, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0009, 9, 21, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0010, 10, 23, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0011, 11, 34, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0012, 12, 36, 2, 0},
    {(unsigned int*)&_cam_data_entry_MSNR_THRES_key0013, 0, 40, 2, 0},
};

static unsigned short _cam_data_dims_MSNR_THRES[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_Size,
    EDim_Flash,
    EDim_App,
    EDim_FaceDetection,
};

static unsigned short _cam_data_expand_MSNR_THRES[] = 
{0, 0, 0};

const IDX_MASK_T cam_data_MSNR_THRES =
{
    {IDX_ALGO_MASK, IDX_DATA_MSNR_THRES_DIM_NS, (unsigned short*)&_cam_data_dims_MSNR_THRES, (unsigned short*)&_cam_data_expand_MSNR_THRES},
    {IDX_DATA_MSNR_THRES_ENTRY_NS, IDX_DATA_MSNR_THRES_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_MSNR_THRES}
};