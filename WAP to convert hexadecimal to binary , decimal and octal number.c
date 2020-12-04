

#include <stdio.h>
#include <math.h>
int main()
{
    int binary = 0, octal=0 , decimal=0 , rem , i=0, spare, decimal2 , hexadecimal;
    printf("enter hexadecimal number");
    scanf ("%d" , &hexadecimal);
    
    while (hexadecimal !=0)
    {
        rem = hexadecimal %10;
        spare = rem * pow (16 , i);
        decimal += spare;
        hexadecimal = hexadecimal / 10;
        i++;
    }
    printf ("decimal is %d \n" , decimal);
    rem = 0;
    i = 0;
    decimal2 = decimal;
    while (decimal != 0)
    { 
        rem = (decimal%2) * pow (10 , i);
        binary += rem;
        decimal = decimal /2;
        i++;
    }
    printf ("binary number is %d \n" , binary );
    
    rem = 0;
    i = 0;
    while (decimal2 != 0)
    { 
        rem = (decimal2 % 8) * pow (10 , i);
        octal += rem;
        decimal2 = decimal2 /8;
        i++;
    }
    printf ("octal number is %d" , octal );

    return 0;
}
