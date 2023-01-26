#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,cube,sum=0;
	printf("enter the no. of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		cube=i*i*i;
		sum=sum+cube;
	}
	printf("%d",sum);
	return 0;
}
