/*
1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2;

ANS= p2 is integer pointer
explanation- Here we declared ptr as a pointer variable. Using that we can assign two pointers.
 First one hold the address of Ptr variable. And second one points the address of the first variable.
 Here the declaration is correct. And p1, p2 are not integers
*/


/*
2.In the following code what is 'P'?
typedef char *charp;
const charp P;
ANS= p is constant pointer
*/


/*
3.What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
 }
 //ANS  x is an array of three function pointers
 */
 
 /*
 4.What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int);
ANS  It is an array of integer pointer.
*/

/*
5.What is pf in the below statement?
typedef int (*pf)(int);
ANS pf is a pointer to function having "int" as argument
*/


/*

6) What do the following declarations mean?
typedef char *pc;
typedef pc fpc();
typedef fpc *pfpc;
typedef pfpc fpfpc();
typedef fpfpc *pfpfpc;
pfpfpc a[N];
*/

 

