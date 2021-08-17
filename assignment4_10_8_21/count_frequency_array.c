//Write a C program to count frequency of each element in an array
#include<stdio.h>
void frequency_count(int array[],int n)
{
	int count = 0;
    int i,j;
    for ( i = 0; i<n;i++)
	 {
        for ( j = 0;j<n;j++)
		  {
            if (array[i] == array[j])
				{
                count++;
            }
        }
        printf("Count of %d is %d\n",array[i],count);
        count = 0;
    }
}
int main()
{
	int n,i;
	printf("Print array size\n"); 
	scanf("%d",&n);    // array size
    int array[n];
    printf("Enter the elements\n");
    
    for(i=0;i<n;i++)   // taking array element
    {
    	scanf("%d",&array[i]);
	 }
	 frequency_count(array,n);   
	 return 0;
}

    
