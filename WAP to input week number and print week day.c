#include <stdio.h>

int main()
{
    int weeknum;
    
    printf ("enter week day number");
    scanf ("%d" , &weeknum);
    
    if (weeknum ==1)
    {
        printf ("day is monday");
    }
    else if (weeknum ==2)
    {
        printf ("day is tuesday");
    }
    else if (weeknum ==3)
    {
        printf ("day is wednesday");
    }
    else if (weeknum ==4)
    {
        printf ("day is thursday");
    }
    else if (weeknum ==5)
    {
        printf ("day is friday");
    }
    else if (weeknum ==6)
    {
        printf ("day is saturday");
    }
    else if (weeknum == 7)
    {
        printf ("day is sunday");
    }
    else 
    {
        printf ("there are seven days in a week");
    }
    return 0;
}