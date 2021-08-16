 //Write a C program to find maximum and minimum element in an array. 
//[ use any sorting algorithm along with time complexity details ]

//Using bubble sort 

#include<stdio.h>
int main(){
   int a[5] = {0,1,4,3,2};
   int i,j,n,t;

   for (i=0; i<4; i++){
      for (j=i+1; j<5; j++){
         if (a[i] > a[j]){
            t = a[i];
            a[i] = a[j];
            a[j] = t;
         }
      }
   }

    printf("largest element : %d\nsmallest element : %d",a[4],a[0]);
   return 0;
}
