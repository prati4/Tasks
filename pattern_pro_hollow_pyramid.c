#include<stdio.h>
int
main ()
{
  int n, i, j, k;
  printf ("Enter the number of rows\n");
  scanf ("%d", &n);
  for (i = 0; i < n; i++)
    {
      for (j = 0; j <= (n - 1) - i; j++)
	    {  
	        if(i!=n)
	            printf (" ");
	       else
	            printf("_");
	       
	    }
    printf ("/");
        for(k = 0; k < i; k++){
            printf ("  ");
        }
    printf ("\\ \n");
    }

  return 0;
}



