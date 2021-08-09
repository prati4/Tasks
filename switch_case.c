#include<stdio.h>
int main()
{ 
  char choice;
  double num1,num2,result;
  printf("Enter the the choice\n");
  scanf("%c",&choice);
  printf("Enter the first number\n");
  scanf("%lf",&num1);
  printf("Enter the first number\n");
  scanf("%lf",&num1);
  
  switch(choice)
  {
  	case 'a':
  		result=num1+num2;
  		printf("Addition is= %lf\n",result);
  		break;
  	case 'b':
  		result=num1-num2;
  		printf("Subtraction is= %lf\n",result);
  		break;
  	default :
  		printf("invalid choice");		
  }
}
