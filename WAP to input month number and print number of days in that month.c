#include <stdio.h>

int main()
{
    int monthnum;
    
    printf ("enter month number");
    scanf ("%d" , &monthnum);
    
    if (monthnum ==4 || monthnum ==6 || monthnum ==9 || monthnum ==11 )
    {
        printf ("number of days are 30");
    }
    else if (monthnum ==2)
    {
        printf ("number of days are 28");
    }
    
    else 
    {
        printf ("number of days are 31");
    }
    return 0;
}
