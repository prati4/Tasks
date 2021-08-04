//DATA TYPES
/*
#include <stdio.h>
#include <limits.h>
int main()
{
   int a;
   char b;
   float c;
   double d;
  // The storage size of int data type is 2 or 4 or 8 byte.
  //it varies depend upon the processor in the CPU that we use. 
  // 2 byte  for 16 bit processor
  // 4 byte  for 32 bit processor
  //8 byte for 64 bit processor
   printf("Storage size for int data type:%d \n",sizeof(a));
   
   
  //Storage size of character data type is 1. We can store only one character using character data type
   printf("Storage size for char data type:%d \n",sizeof(b));
   
  //Storage size of float data type is 4. This also varies depend upon the processor in the CPU as “int” data type.
   printf("Storage size for float data type:%d \n",sizeof(c));
   
   
   //The size of float (single precision float data type) is 4 bytes. And the size of double (double precision float data type) is 8 bytes.
    printf("Storage size for double data type:%d\n",sizeof(d));
    return 0;
}

*/


//signed and unsigned data types
#include <stdio.h>

main()
{     
    //the range of signed int is [-2147483648 to 2147483647]
    printf(" signed int is %d bytes \n", sizeof(signed int));  //4 bytes
    //The range of unsigned int is 0 to 4,294,967,295
	printf(" unsigned int is %d bytes \n", sizeof(unsigned int)); //4 bytes
	
	
	//-128 to 127
	 printf(" signed int is %d bytes \n", sizeof(signed char)); //1 bytes
	 //range of unsi. chr is 0 to 255
	printf(" unsigned int is %d bytes \n", sizeof(unsigned char)); //1 bytes
	
   return 0;
}


   
