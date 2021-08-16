
//UNDERSTANDING OPERATOR PRECEDENCE AND ASSOCIATIVITY 

#include <stdio.h>

int main()
{
    //1.
    //printf("%d\n",1==5==5);     //Output is 0 because comparison operator works from left to right 
    
   // 2.
   // int i =0;
    //printf("%d %d\n",i,i++);    //Here the printf statement is compiled from right to left and thus post 
	                               //increment results in 1 & 0

    //3.
    //int x=5;
    //printf("%d %d %d\n",x++,x++,x++);   //       7 6 5
    
    //4.
    //int x=2;        //Error:-Lvalue required as increment operand
    //printf("%d   ",++x++);
    //printf("%d\n",x++);

    //5.
    //int k=1;        //Use of ternary conditional operator operator 
    //printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");

    //6.
    //int i=5;
    //i=i++ - --i + ++i;  //Post-increment and pre-increment 
    //printf("\n%d",i);
    
    //7.
    //int a=7;
    //a+=a+=a-=6;      // not understood
    //printf("%d\n",a);
    
    //8.
    //int x=10,y=5,p,q;
    //p=x>9;              //Logical operator "||" is true when anyone operant is non-zero
    //q=p||(x=5,y=10);
    //printf("%d %d %d\n",q,x,y);

    
    //10.
    //int x=2,y=4,z;
    //z=y++*x++|y--;      //4*4=8;    8|5=13;
    //printf("%d\n",z);
    //printf("\nHello World");
    
    //11.
    //int a=5,b=6,c=7,d;
    //d=a&=b&=c&&a;       //Here it's a use of bit-wise AND as well as logical AND
    //printf("%d\n",d);   //c&&a=1;   b&=1=0;     a&=0=0;

    //12.
    //int i=10;
    //i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;    //Not understood
    //printf("%d\n",i);
    
    //13.
    //int a=10,b=20;
    //a=(a>5||b=6?40:50);     //Error:-Lvalue required as b=6 is assignment operator and not a Comparison expression
    //printf("%d\n",a);         // if we put a>5||b==6?40:50....then get output 40
    
    //14.
    //printf("%x\n",-1>>4);    //%x display the hexa-decimal value
    //printf("%x\n",-1<<4);

    //15.
    //int x=7;
    //x=(x<<=x%2);        //x<<=1;    x=14;
    //printf("%d\n",x);
    
    //16.
    //int a=2,b=5,c=1;
    //printf("%d\n",(b>=a>=c?1:0));   //Ternary operator 
    
    //17.
    //int a=5;
    //a=a-~a +1;      //Not understood
    //printf("%d\n",a);
    
    //18.
    //int a,b,c,x;
    //a=b=c=1;
    //x=--a||++b*(3-1)/2&&b*(--c/3);      //As (--c/3)=0 therefore nothing matters as it is product and Logical AND
    //printf("%d\n",x);
    
    //19.
    //int a=10;
    //int b = -5;
    //float c = 2.5;
    //printf("%lu %d",sizeof(a) + sizeof((++b) *c), b);   //Inside sizeof function the increment or decrement doesn't work
    
    //20.
    int i=5;
    i=i++ - i;      //5-i;  5-6=-1;
    printf("%d",i);
    return 0;
}


