#include<stdio.h>
int main(){
	int i=1,j;
	int value;
	printf("enter the value=");
	scanf("%d",&value);
	printf("\n");
	while(i<=value){
	j=1;
	while(j<=i){
	printf("%d",i);
	j++;
	}
	printf("\n");
	i++;
	}




return 0;
}
