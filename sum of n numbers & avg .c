#include <stdio.h>
 int main()
{   
    int sum = 0, n,i;
    float avg;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    avg=sum/n;
    printf("\nSum of n Numbers     = %d", sum); 
    printf("\nAverage of n Numbers = %.2f\n", avg);
}
