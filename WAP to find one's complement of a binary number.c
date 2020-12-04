

#include <stdio.h>

int main()
{
    char binary[10], onesComp[10];
    int i;

    printf("Enter binary value: ");
    
    gets(binary);

    for(i=0; i<10; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        
    }

    
        printf("One's complement = %s", onesComp);

    return 0;
}
