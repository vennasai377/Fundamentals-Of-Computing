#include<stdio.h>
int main() {
	int n,i,sum=0;
	printf("Enter the n: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%2 == 1){
		   sum=sum+i;
	    }
	}
	printf("%d",sum);
	return 0;
}
