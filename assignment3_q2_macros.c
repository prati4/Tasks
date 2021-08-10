//Macros


//1) What will be the output of the  following C program?

//Q.1
/*
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}*/

//Q.2
/*
#include<stdio.h>
# define loop while(true)  //true undeclared
int main()
{
	loop
	printf("preprocessor-aptitude");
	return 0;
}
*/

//Q.3
/*
#include<stdio.h>
#define x --5   // error-lvalue required decrement operand
int main()
{  
	printf("%d",x);
	return 0;
}
*/

//Q.4
/*
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}*/


//Q.5
/*
#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;  //macro will expand as  1+2*1+2*1+2=7
	printf("%d",i);
}

//output 7
*/

//Q.6
/*
#include<stdio.h>
#define a =
int main()
{
	int num a 6;    // macro will expand as num = 6; so simply value of num will get printed
	printf("%d",num);   
	return 0;
}
output 6
*/

//Q.7
/*
#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	
//	fun(2+2,1-1) 2+2*1-1
// fun(2+2,1-1) 2+2-1
// fun(2+2,1-1) 4-1
// fun(2+2,1-1) 3
   	return 0;
}
*/


//Q.8
/*
#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );  //__DATE__ is a C macro which print the current date as a character literal in 
	                            //"MMM DD YYYY" format
	return 0;
}
// output aug 10 2021
*/

//Q.9
/*
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__); //The current time as a character literal in "HH:MM:SS" format
	return 0;
}
*/

//Q.10
/*
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );//__LINE__ macro will print the number of lines from start 
	                                 //to the statement containing __LINE__ 
	return 0;
}
// output Line :96
*/

//Q.11
/*
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}
*/

//Q.12
/*
#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}
//output  %s C preprocessor C preprocessor
*/

//Q.13
/*
#include<stdio.h>
//## is nothing more than concatenation operator.
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;    //macro #25=macro25= macro25=47
	preprocessor(25);
	return 0;
}
//output macro25=47
*/

//Q.14
/*

#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	
	return 0;
}
*/
/*
int num =strlen(ptr);

int num =12;

printf("%s",MACRO(preprocessor));

printf("%s",reprocessor);

printf("%d",MACRO(num));

printf("%d",13);
Thus output is reprocessor 13
*/

//Q.15
/*
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i); //The preprocessor directives can be redefined anywhere in the program.
	                // So the most recently assigned value (#define i 20) will be taken.
	return 0;
}
*/


 //Q.16
/* 
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	//Preprocessor in any programming language executes as a seperate pass before the execution of the compiler. 
	//So textual replacement of clrscr() to 50 occurs with no errors.
	return 0;
}
*/
 
//Q.17 
/* 

#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
	//as int will replace by char...and size of char is 1 byte
	// output sizeof(i)=1
}
*/

	



