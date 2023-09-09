
#define CPU_TYPE_8  8 
#define CPU_TYPE_16 16
#define CPU_TYPE_32 32 
#define CPU_TYPE_64 64

#define CPU_TYPE (CPU_TYPE_8)

#if (CPU_TYPE == CPU_TYPE_8)
	typedef unsigned char uint8;
	typedef unsigned short uint16;
	typedef unsigned long uint32;
#elif (CPU_TYPE == CPU_TYPE_16)

#elif (CPU_TYPE == CPU_TYPE_32)
#elif (CPU_TYPE == CPU_TYPE_64)
	typedef unsigned char uint8;
	typedef unsigned short uint16;
	typedef unsigned long uint64;
#endif



    
	
	 

//#endif