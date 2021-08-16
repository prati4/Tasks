/*Write a c program to print all even and odd numbers btwn 1-100  
o/p : even numbers are : 2,4,6,....100
      odd numbers are : 1,3,5,.....99*/
/*     
#include<stdio.h>
int main()
{
	int i;
    printf("Even numbers are ");
	for(i=0;i<=100;i++)
	{    
	 	if(i%2==0)
		{   
			printf("%d\t ",i);
		}
	}
	printf("\nOdd Numbers are");
	for(i=0;i<=100;i++)
	{    
		if(i%2!=0)
		{   
			printf("%d\t ",i);
		}
	}
	return 0;
*/

#include<stdio.h>
int main()
{
	int i;
    
	for(i=0;i<=100;i++)
	{    
	 	if(i%2==0)
		{   
			printf("even %d\t ",i);
		}
		else
		printf("\nodd %d ",i);
	}
	return 0;
}


      
