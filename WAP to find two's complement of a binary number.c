

#include <stdio.h>

int main()
{
    char binary[10], onesComp[10] , twosComp [10];
    int i , j=1;

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
    for(int i=9; i>=0; i--)  
    {  
        if(onesComp[i] == '1' && j == 1)  
        {  
            twosComp[i] = '0';  
        }  
        else if(onesComp[i] == '0' && j == 1)  
        {  
            twosComp[i] = '1';  
            j = 0;  
        }  
        else  
        {  
            twosComp[i] = onesComp[i];  
        }  
    }  

   
    
        printf("Two's complement is = %s", twosComp);

    return 0;
}