// STORAGE CLASS

// 1. AUTOMATIC STORAGE CLASS



// default value of auto storage class
/*
#include <stdio.h>  
int main()  
{  
int a; //auto  
char b;  
float c;   
printf("%d %c %f",a,b,c); // it will give the output garbage value for a ,b,c. as default value for auto sto.class is garbage value   
return 0;  
}  
*/


// scope and lifetime of auto storage class
/*
#include <stdio.h>  
int main()  
{  
int a = 10,i;   
printf("%d ",++a);  
{  
int a = 20;   
for (i=0;i<3;i++)  
{  
printf("%d ",a); // 20 will be printed 3 times since it is the local value of a  
}  
}  
printf("%d ",a); // 11 will be printed since the scope of a = 20 is ended.  
}*/


// STATIC STORAGE CLASS

//// default value of static storage class
/*
#include<stdio.h>  
static char c;  
static int i;  
static float f;   
static char s[10];  
int main ()  
{  
printf("%d %d %f %s",c,i,f); //  value of c,i,and f will be printed 0 or null,as default value of static sto class is 0.  
}  
*/

// scope and lifetime of static storage class
/*
#include<stdio.h>
void display();

void call();
int main()
{
	call();
	call();
	call();
	return 0;
	
	
}
void call()
{
	int i=0;     
	static j=0;
	i=i+1;
	j=j+1;
	printf("%d %d\n",i,j); 
	// here i is auto variable and j is static variable,for every call function the value of i will be initialised with 0,and will perform
    // but for every call function the   static j will retain its value till the the end of the program
    // output will be  1 1 1 for i and 1 2 3 for j
}
*/


 
//Static variables are initialized only once. Compiler persist the variable till the end of the program
/*
int main()
{
	int i;
	for(i=0;i<7;i++)
	{
		  display();
	}
	return 0;
}
	void display()
	{
		auto num=1;
		static int a;   //if declaration and initialization of static variable is done in different line then here the result will be 0 only
		a=0;
		printf("%d %d\n",num,a);
		num++;
		a++;
	}
*/



//REGISTER STORAGE CLASS

/*
#include <stdio.h>  
int main()  
{  
// variable a is allocated memory in the CPU register. The initial default value of a is 0.   
register int a;   
printf("%d",a);  
} 
*/
/*
#include <stdio.h>  
// below example  will give a compile time error since we can not access the address of a register variable.   
int main()  
{  
register int a = 0;   
printf("%u",&a);    
}
*/




//EXTERN STORAGE CLASS
/*
// variable a is defined globally, the memory will not be allocated to a  
#include <stdio.h>  
int a;   
int main()  
{  
extern int a; 
printf("%d",a);  //ans 0
}
*/


/*
#include <stdio.h>  
int a;   
int main()  
{  
extern int a = 0; // this will show a compiler error since we can not use extern and initializer at same time   
printf("%d",a);  
}  
*/

/*
#include <stdio.h> 

int a = 20;
int main()  
{  
extern int a; // Compiler will search here for a variable a defined and initialized somewhere in the pogram or not.   
printf("%d",a);  
}  
*/


#include<stdio.h>
int a=6;
int main()
{
	int a=7;
	printf("%d\n",a);
	{
		extern int a;   //here extern will search the global variable i.e a=6,but if we comment the global variable
		                // then the error will come as 'undefined reference to a'
		printf("%d\n",a);
	}
	
	printf("%d\n",a);    //it will print the value of a which is local to scope
	return 0;
}



