# COMPUTER ASSIGNMENT

WAP to count no. of digits in a number

#include <stdio.h>

int main()
{
    int num , i;
    printf("enter a number");
    scanf ("%d" , &num );
    for (i=1 ; num>10 ; i++)
    {   
        num = num/10;
    }
    printf ("the number of digits are %d" , i);
        

    return 0;
}

WAP to swap the first and last digits of a number

#include <stdio.h>

int main()
{
    int num , i;
    printf("enter a number");
    scanf ("%d" , &num );
    for (i=1 ; num>10 ; i++)
    {   
        num = num/10;
    }
    printf ("the number of digits are %d" , i);
        

    return 0;
}

