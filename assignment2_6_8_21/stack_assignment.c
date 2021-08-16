//create a stack and push 1,2,3 and pop once - print after even push and pop 


#include<stdio.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;
void push(int data)
{
	if(top == MAX - 1)
	{
		printf("\nstack overflow\t");
		return;
	}
	top = top + 1;
	stack_arr[top] = data;        
//	printf("%d\t",data);
	
}
int pop()
{  
   if(top==-1)
   {
   	printf("stack underflow");
   	exit(1);
	}
	int value;
	value=stack_arr[top];
	top=top-1;
	return value;
}
int print()
{   
	int i;
  if(top==-1)
  {
  	printf("stack underflow");
  	return;
  }
	for(i=top;i>=0;i--)
	{
	printf("push=%d",stack_arr[i]);
	printf("\n");
   }
}
int main()
{ 
   int data;
	push(1);   
	push(2);    
	push(3);  
   data =pop();
   print();
 printf("pop= %d",data);
   
}
