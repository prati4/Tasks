#include<stdio.h>
/*
#define PI 3.14
int main()
{
	float r=6.25,area;
	area=PI*r*r;
	printf("The area of circle=%f",area);
	return 0;
}*/


//macro with argument

#define area(x) (3.14*x*x)
int main()
{
	float r1=6.25,r2=2.5,a;
	a=area(r1);
	printf("%f\n",a);
	a=area(r2);
	printf("%f\n",a);
	return 0;
}
	
	

