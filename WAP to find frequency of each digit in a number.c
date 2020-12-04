
#include <stdio.h>

int main()
{
    int num, lastd, i;
    int freq [10];
    printf("enter number");
    scanf ("%d" , &num);
    for(i=0; i<10; i++)
    {
        freq[i] = 0;
    }
    while (num != 0)
    {
        lastd = num%10;
        freq [lastd]++ ; 
        num = num/10;
    }
    for(i=0; i<10; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }


    return 0;
}