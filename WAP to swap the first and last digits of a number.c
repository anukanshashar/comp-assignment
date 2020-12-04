

#include <stdio.h>
#include <math.h>

int main()
{
    int num , firstd, lastd , swapped , n , i;
    printf("enter number");
    scanf ("%d" , &num);
    lastd = num%10;
    n = num;
    for (i=0 ; num >10 ; i++)
    {
        num = num/10;
    }
    firstd = num;
    
    swapped = n - firstd * pow (10 , i) + lastd * pow (10,i);
    
    swapped = swapped - lastd + firstd;
    
    printf ("swapped no. is %d" , swapped);

    return 0;
}
