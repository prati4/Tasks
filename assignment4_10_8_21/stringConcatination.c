//Write a C program to concatenate two strings and find length of a new string.

#include<stdio.h>
#include<string.h>
void string_concatenate(char str1[],char str2[])
{
		char c[30];
		int i=0,j=0;
		for(i=0;str1[i]!='\0';i++)
     {
     	c[i]=str1[i];
     	
      }
     	 for(j=0;str2[j]!='\0';j++)
     {
     	c[i]=str2[j];
     	i++;
      }
     	 c[i]='\0';
 printf("the string is %s",c);
 length_new_string(c);
		
}
void length_new_string(char c[])
{   
 	int l,count=0;
	for(l=0;c[l]!='\0';l++)
	{
		count++;
	}
   printf("\nThe length of new string is= %d",count);
}
int main()
{
	
	char str1[20];
	char str2[20];
	printf("Enter the string 1\n");
	//gets(str1);
	scanf("%s",str1);
 
	printf("Enter the string 2\n");
  //gets(str2); 
   scanf("%s",str2);
   string_concatenate(str1,str2);
  
   
return 0;
}
   
