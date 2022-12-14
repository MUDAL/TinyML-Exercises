#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

const unsigned char nand_model[] DATA_ALIGN_ATTRIBUTE = {
	0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00, 
	0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 
	0x84, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 
	0x10, 0x02, 0x00, 0x00, 0x24, 0x07, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xb2, 0xfd, 0xff, 0xff, 
	0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 
	0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 
	0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0xc0, 0xff, 0xff, 0xff, 0x0a, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 
	0x65, 0x5f, 0x32, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x82, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
	0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 
	0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f, 
	0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 
	0x69, 0x6f, 0x6e, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x48, 0x01, 0x00, 0x00, 
	0x40, 0x01, 0x00, 0x00, 0x2c, 0x01, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 
	0xe4, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 
	0x44, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 
	0x2c, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x06, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x31, 0x2e, 0x31, 0x34, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0xfa, 0xff, 0xff, 0x14, 0xfa, 0xff, 0xff, 
	0x18, 0xfa, 0xff, 0xff, 0x1c, 0xfa, 0xff, 0xff, 0x32, 0xff, 0xff, 0xff, 
	0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x4d, 0xe2, 0x16, 0xbf, 
	0x65, 0xcf, 0x0a, 0xc0, 0xfc, 0x22, 0xb9, 0x3f, 0xc5, 0x63, 0xee, 0xbf, 
	0x4e, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 
	0x51, 0x78, 0x1a, 0xbe, 0x9b, 0xb2, 0x18, 0xbf, 0xaa, 0x83, 0x5e, 0xbf, 
	0x34, 0x6d, 0x13, 0x3f, 0xa8, 0xaf, 0x5d, 0xbe, 0x83, 0x6b, 0xaa, 0x3f, 
	0x63, 0xdb, 0x55, 0xbf, 0x9b, 0xdd, 0x38, 0x3f, 0x3d, 0x77, 0x18, 0x3f, 
	0x6d, 0x8f, 0xb1, 0xbf, 0x65, 0xc6, 0xce, 0x3f, 0x1e, 0x31, 0x96, 0x3f, 
	0x78, 0x92, 0xe7, 0x3c, 0x58, 0x3b, 0x36, 0x3f, 0x21, 0x48, 0xbe, 0xbf, 
	0x32, 0x11, 0x2f, 0x3f, 0x9a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x09, 0xad, 0xc9, 0x3e, 0xd9, 0xe0, 0x52, 0xbe, 
	0x1b, 0x39, 0xab, 0x3f, 0x21, 0x70, 0xa3, 0x3f, 0x91, 0xd2, 0x19, 0xbf, 
	0x81, 0xfc, 0x4d, 0xbe, 0xa7, 0x34, 0x4f, 0xbd, 0x7c, 0x44, 0xb4, 0x3f, 
	0xc6, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x88, 0x18, 0x5d, 0x3f, 0xcf, 0x9d, 0x50, 0xbf, 0xc6, 0xe4, 0x94, 0x3f, 
	0xbb, 0x08, 0x51, 0x3f, 0xe2, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0xdb, 0xc2, 0x97, 0xbd, 0xec, 0xe3, 0x01, 0xbf, 
	0x79, 0xe1, 0x9c, 0x3f, 0xc8, 0x5c, 0xc3, 0xbd, 0x00, 0x00, 0x06, 0x00, 
	0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x2e, 0xbf, 0x6c, 0x3f, 0x04, 0xfb, 0xff, 0xff, 
	0x08, 0xfb, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 
	0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 
	0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 
	0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 
	0x08, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 
	0x34, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 
	0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 
	0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0xb0, 0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 
	0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 
	0xba, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 
	0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 
	0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 
	0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
	0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 
	0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x7c, 0x03, 0x00, 0x00, 
	0x30, 0x03, 0x00, 0x00, 0xe8, 0x02, 0x00, 0x00, 0xb4, 0x02, 0x00, 0x00, 
	0x70, 0x02, 0x00, 0x00, 0x28, 0x02, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 
	0x5c, 0x01, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0xc4, 0xfc, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 
	0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 
	0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x01, 0x00, 0x00, 0x00, 0xb0, 0xfc, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 
	0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 
	0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a, 
	0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x18, 0xfd, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 
	0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 
	0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
	0x01, 0x00, 0x00, 0x00, 0x04, 0xfd, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00, 
	0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 
	0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 
	0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 
	0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61, 
	0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x88, 0xfd, 0xff, 0xff, 
	0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x74, 0xfd, 0xff, 0xff, 
	0x4c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 
	0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x4d, 
	0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 
	0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 
	0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 
	0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 
	0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x10, 0xfe, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 
	0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 
	0xfc, 0xfd, 0xff, 0xff, 0x46, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 
	0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 
	0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 
	0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 
	0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 
	0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42, 
	0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xd2, 0xfe, 0xff, 0xff, 
	0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
	0x28, 0x00, 0x00, 0x00, 0x6c, 0xfe, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 
	0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 
	0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 
	0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x16, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 
	0xb0, 0xfe, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 
	0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 
	0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x5a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x05, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0xf4, 0xfe, 0xff, 0xff, 
	0x17, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 
	0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 
	0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 
	0x34, 0xff, 0xff, 0xff, 0x0a, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 
	0x65, 0x2f, 0x62, 0x69, 0x61, 0x73, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 
	0x64, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 
	0x65, 0x5f, 0x31, 0x2f, 0x62, 0x69, 0x61, 0x73, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 
	0x14, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 
	0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0xa8, 0xff, 0xff, 0xff, 
	0x0c, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 
	0x62, 0x69, 0x61, 0x73, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 
	0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 
	0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
	0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 
	0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 
	0x75, 0x6c, 0x74, 0x5f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 
	0x70, 0x75, 0x74, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff, 
	0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0c, 0x00, 0x0c, 0x00, 
	0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09
};
const int model_data_len = 1928;
