#include <stdio.h>  
#include <conio.h>  
#include <math.h> 
int main()  
{   
    int i, bin, decimal = 0, rem;  
    printf (" Enter a binary number: ");  
    scanf ("%d", &bin);   
    for (i = 0; bin != 0; ++i)  
    {  
        rem = bin % 10;  
        bin = bin / 10;  
        decimal = decimal + (rem) * ( pow (2, i));  
          
    }  
    printf ("\n The decimal conversion is: %d", decimal);  
    return 0;
}
