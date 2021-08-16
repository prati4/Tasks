//Write a C program to check whether a string is palindrome or not

#include<stdio.h>
#include<string.h>

int palindrome(char str[],int l)
{
	int i;
    for(i=0;i<l/2;i++)                 
	{
		if(str[i]!=str[l-1-i])   
		{
		printf("not palindrome");
		break;
		}
	}
	if(i==l/2)        
		printf("palindrome");
}
int main()
{
	char str[10];
	int l,i;
	printf("Enter the string\n");
	//fgets(str,10,stdin);  
  	gets(str);                  
	 l=strlen(str);
	 palindrome(str,l);
	 return 0;
}

	
	
