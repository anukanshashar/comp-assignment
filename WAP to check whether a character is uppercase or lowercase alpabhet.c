#include <stdio.h>

int main()
{
    char c;
    printf("enter alphabet");
    scanf ("%c" , &c);
    
    if (c >= 'a' && c <='z')
    {
        printf ("alphabet is lowercase");
    }
    
    else 
    {
        printf ("alphabet is uppercase");
    }

    return 0;
}
