
#include <stdio.h>

int main()
{
    int num , rem , i, n=0;
    printf("enter number");
    scanf ("%d" , &num);
    while(num != 0)
    {
        n = (n * 10) + (num % 10);
        num = num/10;
    }
    for (i=0 ; n>0 ; i++)
    {
        rem = n%10;
        switch (rem)
        {
            case 0 : printf ("zero \t");
            break;
            case 1 : printf ("one\t");
            break;
            case 2 : printf ("two\t");
            break;
            case 3 : printf ("three\t");
            break;
            case 4 : printf ("four\t");
            break;
            case 5 : printf ("five\t");
            break;
            case 6 : printf ("six\t");
            break;
            case 7 : printf ("seven\t");
            break;
            case 8 : printf ("eight\t");
            break;
            case 9 : printf ("nine\t");
            break;
           
        }
        
        n = n/10;
        
    }

    return 0;
}
