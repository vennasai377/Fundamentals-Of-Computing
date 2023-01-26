#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number: ");
	scanf("%d",&n);
	if(n < 0){
		printf("negative integer");
	}
	else{
		printf("positive integer");
	}
	return 0;
}
