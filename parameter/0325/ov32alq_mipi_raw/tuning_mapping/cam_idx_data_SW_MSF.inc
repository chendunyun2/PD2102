#define IDX_DATA_SW_MSF_DIM_NS    5
#define IDX_DATA_SW_MSF_FACTOR_SZ    7
#define IDX_DATA_SW_MSF_ENTRY_NS    8

static unsigned int _cam_data_entry_SW_MSF_key0000[] = {0X000FFFFC, 0X00000000, 0X03FD0000, 0X00000030, 0X02000000, 0X00000088, 0X00000002, };
static unsigned int _cam_data_entry_SW_MSF_key0001[] = {0X000FFFFC, 0X00000000, 0X03FD0000, 0X00000030, 0X02000000, 0X00000088, 0X00000004, };
static unsigned int _cam_data_entry_SW_MSF_key0002[] = {0X000FFFFC, 0X00000000, 0X03FD0000, 0X00000030, 0X02000000, 0X00008008, 0X00000006, };
static unsigned int _cam_data_entry_SW_MSF_key0003[] = {0X000FFFFC, 0X00000000, 0X03FD0000, 0X00000030, 0XFE000000, 0X000000B7, 0X00000006, };
static unsigned int _cam_data_entry_SW_MSF_key0004[] = {0X000FFFFC, 0X00000000, 0X03FD0000, 0X00000030, 0XFE000000, 0X00008037, 0X00000006, };
static unsigned int _cam_data_entry_SW_MSF_key0005[] = {0X000FFFFC, 0X00000000, 0X03FD0000, 0X00000030, 0XFE000000, 0X0020007F, 0X00000006, };
static unsigned int _cam_data_entry_SW_MSF_key0006[] = {0X000FFFFC, 0X00000000, 0X03FD0000, 0X00000030, 0XFE000000, 0X0100007F, 0X00000006, };
static unsigned int _cam_data_entry_SW_MSF_key0007[] = {0XFFFFFFFF, 0XFFFFFFFF, 0XFFFFFFFF, 0XFFFFFFFF, 0X05FFFFFF, 0XFFFFFFF8, 0X00000007, };

static IDX_MASK_ENTRY _cam_data_entry_SW_MSF[IDX_DATA_SW_MSF_ENTRY_NS] =
{
    {(unsigned int*)&_cam_data_entry_SW_MSF_key0000, 0, 1, 2, 0},
    {(unsigned int*)&_cam_data_entry_SW_MSF_key0001, 13, 3, 2, 0},
    {(unsigned int*)&_cam_data_entry_SW_MSF_key0002, 26, 7, 2, 0},
    {(unsigned int*)&_cam_data_entry_SW_MSF_key0003, 39, 15, 2, 0},
    {(unsigned int*)&_cam_data_entry_SW_MSF_key0004, 52, 17, 2, 0},
    {(unsigned int*)&_cam_data_entry_SW_MSF_key0005, 65, 19, 2, 0},
    {(unsigned int*)&_cam_data_entry_SW_MSF_key0006, 78, 23, 2, 0},
    {(unsigned int*)&_cam_data_entry_SW_MSF_key0007, 91, 40, 2, 0},
};

static unsigned short _cam_data_dims_SW_MSF[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_Flash,
    EDim_App,
    EDim_FaceDetection,
};

static unsigned short _cam_data_expand_SW_MSF[] = 
{0, 0, 1};

const IDX_MASK_T cam_data_SW_MSF =
{
    {IDX_ALGO_MASK, IDX_DATA_SW_MSF_DIM_NS, (unsigned short*)&_cam_data_dims_SW_MSF, (unsigned short*)&_cam_data_expand_SW_MSF},
    {IDX_DATA_SW_MSF_ENTRY_NS, IDX_DATA_SW_MSF_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_SW_MSF}
};