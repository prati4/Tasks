//PROGRAM TO EXPLAIN ALL OPERATORS USING DIFFDATA TYPES

//ARITHEMATIC OPERATOR
/*
#include <stdio.h>
int main()
{
    int a = 7,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);      // ans 11   an arithematic operation between an integer and integer alwys yeilds an integer result.
    c = a-b;
    printf("a-b = %d \n",c);     // ans 3      
    c = a*b;
    printf("a*b = %d \n",c);    //ans 28
    c = a/b;
    printf("a/b = %d \n",c);   // ans 1 ... In normal calculation, 7/4 = 1.75. However, the output is 1 in the program. 
                              //It is because both the variables a and b are integers. Hence, the output is also an integer
                             //the compiler neglects the term after the decimal point and shows answer 1 instead of 1.75 
  
  
    c = a%b;
    printf("Remainder = %d \n",c);   // ans 3 ...  The modulo operator % computes the remainder. When a=7 is divided by b=4, 
                                    //the remainder is 3. The % operator can only be used with integers.
    return 0;
}
*/

//INCREMENT AND DECREMENT OPERATOR
/*
#include <stdio.h>
int main() {
   int var1 = 10, var2 = 10;

   // 10 is displayed
   // Then, var1 is increased to 11.
   printf("%d\n", var1++);  //ans 10

   // var2 is increased to 11
   // Then, it is displayed.
   printf("%d\n", ++var2);  //ans 11

   return 0;
}
*/

//RELATIONAL OPERATOR

/*
#include <stdio.h>
int main()
{
    int a = 10, b = 10, c = 20;
    
   // A relational operator checks the relationship between two operands. 
   //If the relation is true, it returns 1; if the relation is false, it returns value 0.

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    return 0;
    
    */
    
//LOGICAL OPERATOR
/*
#include <stdio.h>
int main()
{
    int a = 10, b = 10, c = 20, result;
     //AND operator returns true (1) if both the operands true and return false if any one operand is false
     //here  (10==10) return true(1) && (20>10) return true(1)
     //  1&&1=1
     
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);
    
     // OR operator return True only if either one operand is true
     // here (10==10) return true(1) && (20<10) return false(0)
     // 1||0=1
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);
   
   //NOT operator  it is used to reverse the logical state of its operand.
    result = !(a != b);   //  !((10!=10)= !(0)= 1
    printf("!(a != b) is %d \n", result);
     
    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}
*/

//TERNARY OPERATOR (conditional operator)

#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	
	//(exp1?exp2:exp3)
	y=(x>5?3:4);
	//this statement will store 3 in y if x is greater than 5 ,otherwise it will store 4 in y.
	printf("%d",y);
	return 0;
}







