#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number: ");
	scanf("%d",&n);
	if(n%2 == 0){
		printf("given number is even");
	}
	else{
		printf("given number is odd");
	}
	return 0;
}
