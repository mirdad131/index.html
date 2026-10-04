#include<stdio.h>

int main(){
	int a=-1;//
	int c=0;//use some value at least o
	int p;
	int s=0;//please have some value for s 
	int y;
	printf("enter the number :");
	scanf("%d",&p);
	while(p!=a){
		s++;//for counting 
		c=c+p;//sum of the value
	printf("enter the number :");
	scanf("%d",&p);
		
	}
	y=c/s;
	
	printf("the average of the number is %d",y);
 return 0;	
}
