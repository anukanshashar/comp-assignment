


#include <stdio.h>
#include <math.h>
int main()
{
    int binary = 0, octal , decimal=0 , rem , i=0, spare, decimal2 , hexadecimal = 0 ;
    printf("enter octal number");
    scanf ("%d" , &octal);
    
    while (octal !=0)
    {
        rem = octal %10;
        spare = rem * pow (8 , i);
        decimal += spare;
        octal = octal / 10;
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
        rem = (decimal2 % 16) * pow (10 , i);
        hexadecimal += rem;
        decimal2 = decimal2 /16;
        i++;
    }
    printf ("hexadecimal number is %d" , hexadecimal );

    return 0;
}
