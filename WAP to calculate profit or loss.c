#include <stdio.h>

int main() 
{
    int sp , cp;
    printf ("enter cost price of product");
    scanf ("%d" , &cp);
    printf ("enter selliing price of product");
    scanf ("%d" , &sp);
    
    if (sp>cp)
    {
        printf ("profit is of Rs. %d" , sp-cp);
    }
    else if (cp > sp)
    {
        printf ("loss is of Rs. %d" , cp-sp);
    }
    else 
    {
        printf ("break even case , no profit or loss");
    }
    return 0;
}