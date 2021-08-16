//Write a C program to insert and delete  an element in an array at specified position - 
//write fns  insert(n) , delete(n) where  n is specfied position taken from user

#include<stdio.h>
void insert_array(int array[],int size)
{
int pos,element,i;
printf("Enter the postion where element to be inserted\n");
scanf("%d",&pos);
printf("Enter the element to be inserted\n");
scanf("%d",&element);

if(pos>size)
{
	printf("invalid input");
}
else
{
for(i=size-1;i>=pos-1;i--)
{
	array[i+1]=array[i];
}
   array[pos-1]=element;
   
printf("After the insertion of element the array is  \n");
for(i=0;i<=size;i++)
	{
		printf("%d ",array[i]);
	}
}
}
void delete_array(int array[],int size)
{
int pos,element,i;
printf("\nEnter the postion where element to be deleted\n");
scanf("%d",&pos);
if(pos>=size+1)
{
		printf("deletion cant be perform\n");
}
else
{

for(i=pos-1;i<size-1;i++)
{
	array[i]=array[i+1];
}
printf("After deletion of array\n");
for(i=0;i<size-1;i++)
{
	printf("%d ",array[i]);
}
}

}

int main()
{

	int size,i;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int array[size];
	printf("Enter the array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
	}
	//insert_array(array,size);
	delete_array(array,size);
	return 0;
}
