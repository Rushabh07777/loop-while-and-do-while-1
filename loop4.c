#include<stdio.h>
main(){
	int i,a;
	int b1=0,b2=1;
	int rushabh=b1+b2;
    printf("Enter the one number:");
	scanf("%d",&a);
	printf("Fibonacci Serise: %d,%d,",b1,b2);
	for(i=3; i<=a; ++i){
		printf("%d,",rushabh);
		b1=b2;
		b2=rushabh;
		rushabh=b1+b2;
	}
}