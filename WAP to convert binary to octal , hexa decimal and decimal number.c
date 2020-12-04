
#include <stdio.h>
#include <math.h>
int main()
{
    int binary, octal , decimal=0 , rem , i=0, spare, decimal2 , hexadecimal = 0 ;
    printf("enter binary number");
    scanf ("%d" , &binary);
    
    while (binary !=0)
    {
        rem = binary %10;
        spare = rem * pow (2 , i);
        decimal += spare;
        binary = binary / 10;
        i++;
    }
    printf ("decimal is %d \n" , decimal);
    rem = 0;
    i = 0;
    decimal2 = decimal;
    while (decimal != 0)
    { 
        rem = (decimal%8) * pow (10 , i);
        octal += rem;
        decimal = decimal /8;
        i++;
    }
    printf ("octal number is %d \n" , octal );
    
    rem = 0;
    i = 0;
    while (decimal2 != 0)
    { 
        rem = (decimal2 % 16) * pow (10 , i);
        hexadecimal += rem;
        decimal2 = decimal2 /16;
        i++;
    }
    printf ("hexadecimal number is %d" , hexadecimal );

    return 0;
}