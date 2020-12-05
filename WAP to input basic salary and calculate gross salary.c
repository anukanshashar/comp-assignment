#include <stdio.h>

int main() 
{
    float bsal , hra , da , grsal;
    printf ("enter basic salary");
    scanf ("%f" , &bsal);
    if (bsal <= 10000)
    {
        hra = bsal*0.2;
        da = bsal* 0.8;
    }
    else if (bsal > 10000 && bsal <=20000)
    {
        hra = bsal*0.25;
        da = bsal* 0.9;
    }
    else 
    {
        hra = bsal*0.3;
        da = bsal* 0.95;
    }
    grsal = bsal + hra + da;
    printf ("gross salary is %f" , grsal);
    return 0;
}