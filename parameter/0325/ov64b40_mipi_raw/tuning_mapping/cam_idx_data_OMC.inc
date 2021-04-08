#define IDX_DATA_OMC_DIM_NS    6
#define IDX_DATA_OMC_FACTOR_SZ    7
#define IDX_DATA_OMC_ENTRY_NS    15

static unsigned int _cam_data_entry_OMC_key0000[] = {0X000FFFFC, 0X00000000, 0X03FF0000, 0X00000030, 0X02000000, 0X002000C8, 0X0000000A, };
static unsigned int _cam_data_entry_OMC_key0001[] = {0X000FFFFC, 0X00000000, 0X03FF0000, 0X00000030, 0X02000000, 0X002000C8, 0X0000000C, };
static unsigned int _cam_data_entry_OMC_key0002[] = {0X000FFFFC, 0X00000000, 0X03FF0000, 0X00000030, 0X4200000C, 0X000080C8, 0X0000000E, };
static unsigned int _cam_data_entry_OMC_key0003[] = {0X001FFFFC, 0X000000C0, 0X03FF0000, 0X00000030, 0X02000000, 0X002000F8, 0X00000076, };
static unsigned int _cam_data_entry_OMC_key0004[] = {0X000FFFFC, 0X00000030, 0X03FF0000, 0X00000030, 0X02000000, 0X04000078, 0X0000007A, };
static unsigned int _cam_data_entry_OMC_key0005[] = {0X000FFFFC, 0X00000030, 0X03FF0000, 0X00000030, 0X02000000, 0X04000078, 0X0000007C, };
static unsigned int _cam_data_entry_OMC_key0006[] = {0X000FFFFC, 0X00000000, 0X03FF0000, 0X00000030, 0X02000000, 0X01000078, 0X0000000E, };
static unsigned int _cam_data_entry_OMC_key0007[] = {0X000FFFFC, 0X00000000, 0X03FF0000, 0X00000030, 0X02000000, 0X01000078, 0X00000016, };
static unsigned int _cam_data_entry_OMC_key0008[] = {0X000FFFFC, 0X00000000, 0X03FF0000, 0X00000030, 0X02000000, 0X01000078, 0X00000026, };
static unsigned int _cam_data_entry_OMC_key0009[] = {0X000FFFFC, 0X00000000, 0X03FF0000, 0X00000030, 0X02000000, 0X01000078, 0X00000046, };
static unsigned int _cam_data_entry_OMC_key0010[] = {0X001FFFFC, 0X000000C0, 0X03FF0000, 0X00000030, 0X02000000, 0X00000078, 0X0000007B, };
static unsigned int _cam_data_entry_OMC_key0011[] = {0X001FFFFC, 0X000000C0, 0X03FF0000, 0X00000030, 0X00000000, 0X00000079, 0X0000007B, };
static unsigned int _cam_data_entry_OMC_key0012[] = {0X001FFFFC, 0X000000C0, 0X03FF0000, 0X00000030, 0X02000000, 0X00000078, 0X0000007D, };
static unsigned int _cam_data_entry_OMC_key0013[] = {0X001FFFFC, 0X000000C0, 0X03FF0000, 0X00000030, 0X00000000, 0X00000079, 0X0000007D, };
static unsigned int _cam_data_entry_OMC_key0014[] = {0X000FFFFC, 0X00000000, 0X03FF0000, 0X00000030, 0XFE000000, 0XFFFFFFB7, 0X0000007F, };

static IDX_MASK_ENTRY _cam_data_entry_OMC[IDX_DATA_OMC_ENTRY_NS] =
{
    {(unsigned int*)&_cam_data_entry_OMC_key0000, 0, 7, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0001, 14, 8, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0002, 28, 9, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0003, 42, 10, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0004, 56, 68, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0005, 70, 69, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0006, 84, 74, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0007, 98, 75, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0008, 112, 76, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0009, 126, 77, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0010, 140, 79, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0011, 140, 80, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0012, 154, 81, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0013, 154, 82, 1, 0},
    {(unsigned int*)&_cam_data_entry_OMC_key0014, 168, 84, 1, 0},
};

static unsigned short _cam_data_dims_OMC[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_Flash,
    EDim_App,
    EDim_FaceDetection,
    EDim_Zoom,
};

static unsigned short _cam_data_expand_OMC[] = 
{0, 0, 1};

const IDX_MASK_T cam_data_OMC =
{
    {IDX_ALGO_MASK, IDX_DATA_OMC_DIM_NS, (unsigned short*)&_cam_data_dims_OMC, (unsigned short*)&_cam_data_expand_OMC},
    {IDX_DATA_OMC_ENTRY_NS, IDX_DATA_OMC_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_OMC}
};