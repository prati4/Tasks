//Write a C program to copy all elements from an array to another array.



#include<stdio.h>
int copy_array(int array1[],int len)
 {  
  	int i;
  	int array2[len];
  	printf("new array element\n");
  	for(i=0;i<len;i++)
  	{
  		array2[i]=array1[i];
  		printf("%d ",array2[i]);
   }
	
}
int main()
{
	int len=5,i;
	printf("Enter the size of array\n");
	scanf("%d",&len);
	int array1[len];
	for(i=0;i<len;i++)
	{
	scanf("%d",&array1[i]);	
	}
	copy_array(array1,len);
}
