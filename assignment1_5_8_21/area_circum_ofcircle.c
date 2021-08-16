//PROGRAM TO CALCULATE AREA AND CIRCUMFERENCE OF CIRCLE

#include<stdio.h>
 int main() {
 
           
   float PI = 3.14, area, cirumference, radius;
 
   printf("\nEnter radius of circle: ");
   scanf("%f", &radius);
 
   area = PI * radius * radius;
   printf("\nArea of circle : %.2f ", area);    //(%.2) indicates that the ,want only 2 digit after decimal point.
 
   cirumference = 2 * PI * radius;
   printf("\nCircumference : %.2f ", cirumference);
 
   return (0);
}
