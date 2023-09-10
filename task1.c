/**
***********************************************************
* @file   :task1.c
* @author :Ahmed Manour
* @brief  :Convert Roman Symbols to equivelant integer values
***********************************************************
*/
   
/* *********Include section start **************** */
#include <stdio.h>
#include<windows.h>
#include "task1.h"
/* *********Include section end ****************** */




/************************ Sub-program sectionstart***********************************/
int main( void ){
	getDataFromUser();
}

// collect chars from keyboard
uint16* getDataFromUser( void ){
#define ENTER_KEY_ASCII 'q'
static uint16 arrChars[] = {0};
uint8 counter = 0;
uint8 num_of_entered_keys = 0;
static uint16 sum = 0;

    /*
	printf("Enter Roman Number\n");
	scanf("%c", & [counter]);
	printf("\n arrChars[counter]= %i\n", arrChars[counter]);
	*/

	printf("Enter Roman Number\n");
	while( arrChars[counter] != ENTER_KEY_ASCII ){
		scanf(" %c", &arrChars[counter]);
	}
	/*	for (counter = 0; arrChars[counter] != ENTER_KEY_ASCII; counter++){
		scanf("  %c", &arrChars[counter]);
		//num_of_entered_keys++;
	}
	*/
	for (counter = 0; counter < 8; counter++){
		switch(arrChars[counter]){
			//small case
			case'i':	arrChars[counter] = 1;    break;
			case'v':	arrChars[counter] = 5;    break;
			case'x':	arrChars[counter] = 10;   break;
			case'l':	arrChars[counter] = 50;   break;
			case'c':	arrChars[counter] = 100;  break;
			case'd':	arrChars[counter] = 500;  break;
			case'm':	arrChars[counter] = 1000; break;
			//capital case
			case'I':	arrChars[counter] = 1;    break;
			case'V':	arrChars[counter] = 5;    break;
			case'X':	arrChars[counter] = 10;   break;
			case'L':	arrChars[counter] = 50;   break;
			case'C':	arrChars[counter] = 100;  break;
			case'D':	arrChars[counter] = 500;  break;
			case'M':	arrChars[counter] = 1000; break;
			default:0;                           break;
		}
	}
	printf("\nyou entered\n");
	for (counter = 0; counter < 3; counter++){
		 printf("%i\n", arrChars[counter]);
	}
	// *******************************
	for (counter = 0; counter < ENTER_KEY_ASCII; counter+= 2){
		if((arrChars[counter]) >= (arrChars[counter+1])){
			sum += (arrChars[counter]) +(arrChars[counter+1]);
			//counter += 2;
		}else if((arrChars[counter]) < (arrChars[counter+1])){
			 sum += (arrChars[counter+1])-(arrChars[counter]);
			 //counter += 2;
		}
	}
	/*printf("\nyou entered\n");
	for (counter = 0; counter < ENTER_KEY_ASCII; counter++){
		 printf("%i\n", arrChars[counter]);
	}*/
	printf("\nsum= %i\n", sum);


return arrChars;
}
/*
void romanCharsCalculation(void){
uint16* pArrChars = NULL;
uint8 counter = 0;
uint16 sum = 0;
	pArrChars = getDataFromUser();
	printf("\nyou entered\n");
	for (counter = 0; counter < 7; counter++){
		 printf("%i\n", *pArrChars++);
	}
	for (counter = 0; counter < 7; counter+2){
		 //printf("%i\n", *pArrChars++);
		 pArrChars += counter;
		 if((*pArrChars) >= (*++pArrChars)){
			sum += (*pArrChars) +(*++pArrChars);
		 }else if((*pArrChars) < (*++pArrChars)){
			 sum += (*++pArrChars)-(*pArrChars);
		 }
	}



}
*/
uint16 romanToInt(){

return 0;
}
//convertCharToRoman();
//romanToInt();
/************************ Sub-program section end ************************************/



/**
******************************************
  user         date         brief
******************************************
ahmed mansour 02jan2023    fun
*/
























/*
static uint8* return_arr();

const uint8 *s1 = "ahmed mansour";
// -------------------------------------------------
uint8 v3 = 5;
uint8 v4 = 20;
//uint8 *p;
//uint8 **pp;
//p = &v1;
//pp = &p;
uint8* i= &v3;
uint8* j= &v4;
//i = &V3;
//j = &V4;

int main( void ){
	//*i = *i**j;
	//*i *= (*j);
	//printf("*i = %i", *i);
/*
    const uint8 *s2 = "esraa hamed";
    //*s1 = 'w';
    //*s2 = 'h';
	printf("s =  %s\n", s1 );
	printf("s =  %s\n", s2 );
	//--------------------------------------
	printf("p adrss 0x%X\n", p);
	printf("pp adrss 0x%X\n", pp);
	//--------------------------------------
	//printf("p adrss %i\n", *p);
	//printf("pp adrss %i\n", **pp);
    //-------------------------------------*/
	//uint8* arr = return_arr();
    //printf("arr0 %i\n", *arr);
	/*
	uint8 c = 0;

    uint8 arr2[] = {60, 30, 45, 55, 65};
    uint8 arr3[3][3] = {  {10, 20, 30},
	                      {40, 50, 60},
					      {70, 80, 90}
					   };
    uint8* ptr = (uint8 *)arr3;
	// arr1++;ERROR
	for (c = 0; c < 5; c++){
		printf("arr1[c] %i\n", arr2[c] );//arr2[c] OR *(arr2 + c)
	}
	printf("\narr3[3] %i\n", arr3[3] );
	printf("\narr3[3] %i\n", &arr3[0][3]);
	printf("----------------------------\n");
	printf("\naddress %i\n", arr3);
	printf("\naddress %i\n", arr3[0]+0 );
	printf("\naddress %i\n", &arr3[0][0] );
	printf("-----------usin pointers -------\n");
	printf("\n*ptr %i\n", *ptr);
	printf("----rows first element-------\n");
	printf("\n*ptr %i\n", **arr3);
	printf("\n*ptr %i\n", **(arr3+1));
	printf("\n*ptr %i\n", **(arr3+2));
	printf("----using *(*(arrN+r) + c) \n");
	printf("\n*ptr %i\n", *(*(arr3+0) + 0) );
	printf("\n*ptr %i\n", *(*(arr3+1) + 1) );
	printf("\n*ptr %i\n", *(*(arr3+2) + 2) );
	printf("\n*ptr %i\n", *(*(arr3+3) + 3) );
	printf("------------------------------\n");
	uint8 idx1 = 0;
	uint8 idx2 = 0;
	for(idx1 = 0; idx1 < 3; idx1++){
		for(idx2 = 0; idx2 < 3; idx2++){
			//printf(" %i", *(*(arr3+idx1)+idx2));
			printf(" %i", *((arr3[idx1])+idx2) );
		}
		printf("\n");
	}
	printf("------- array of string ----------\n");
	uint8 *



}

static uint8* return_arr(){
	static uint8 arr1[] = {11, 12, 13, 14, 15};
return arr1;
}
*/