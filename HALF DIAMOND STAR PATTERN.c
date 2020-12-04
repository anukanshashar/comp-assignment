#include<stdio.h>

int main()
{
    int i, j , m;


    m=1;

    for(i=1;i<10;i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("*");
        }

        if(i < 5)
        {
           m++;
        }
        else
        {
        
            m--;
        }

        printf("\n");
    }

    return 0;
}
