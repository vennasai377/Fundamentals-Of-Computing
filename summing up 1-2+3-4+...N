#include <stdio.h>
int sum(int n)
{
    if (n % 2 == 0)
        return (-(n / 2));
    else
        return ((n + 1) / 2);
}
int main()
{
    int n;
    printf("enter the number of terms:");
    scanf("%d", &n);
    printf("Sum is:%d", sum(n)); 
    return 0;
}
