
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
/************************ Macros section start ************************************/
#define TRUE 1
#define FALSE 0
#define UPPER_CASE TRUE
#define LOWER_CASE FALSE
#if UPPER_CASE==TRUE
  #define I 1
  #define V 5
  //#define X 10
  #define L 50
  #define C 100
  #define D 500
  #define M 1000
#elif LOWER_CASE==FALSE
  #define i 1
  #define v 5
  //#define x 10
  #define l 50
  #define c 100
  #define d 500
  #define m 1000
#endif
/************************ Macros section end *********************************************/

/****** ****************** Sub-program declaration start **********************************/
// collect chars from keyboard
uint16* getDataFromUser( void );
void romanCharsCalculation(void);
uint16 romanToInt( );
/************************ Sub-program declaration end ************************************/


    
	
	 

//#endif