# COMPUTER ASSIGNMENT PART 2 


Q1 PYRAMID STAR PATTERN

#include <stdio.h>

int main()
{
    int i , j;
    for (i=1 ; i<=5 ; i++)
    {
        for (j =1 ; j <= 5 -i ; j++)
        {
            printf (" ");
        }
        for (j=1 ; j <= 2*i-1 ; j++)
        {
            printf ("*");
            
        }
        printf ("\n");
    }

    return 0;
}


Q2 HOLLOW PYRAMID STAR PATTERN

#include <stdio.h>

int main()
{
    int i , j;
    for (i=1 ; i<=5 ; i++)
    {
        for (j =1 ; j <= 5 - i ; j++)
        {
            printf (" ");
        }
        for (j=1 ; j <= 2*i-1 ; j++)
        {
            if (i==5 || j==1 || j==(2*i-1))
            printf ("*");
            else 
            printf(" ");
            
        }
        printf ("\n");
    }

    return 0;
}

Q3. INVERTED PYRAMID STAR PATTERN
#include <stdio.h>

int main()
{
    int i , j;
    for (i=1 ; i<=5 ; i++)
    {
        for (j =1 ; j < i ; j++)
        {
            printf (" ");
        }
        for (j=1 ; j <= 11-2*i ; j++)
        {
            printf ("*");
            
        }
        printf ("\n");
    }

    return 0;
}


Q4 HOLLOW INVERTED PYRAMID STAR PATTERN
#include <stdio.h>

int main()
{
    int i , j;
    for (i=1 ; i<=5 ; i++)
    {
        for (j =1 ; j <= 5 - i ; j++)
        {
            printf (" ");
        }
        for (j=1 ; j <= 2*i-1 ; j++)
        {
            if (i==5 || j==1 || j==(2*i-1))
            printf ("*");
            else 
            printf(" ");
            
        }
        printf ("\n");
    }

    return 0;
}



Q5 HALF DIAMOND STAR PATTERN




Q6 MIRRORED HALF DIAMOND STAR PATTERN
