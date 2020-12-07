

#include <stdio.h>
#include <math.h>
#include <string.h>  
int main()
{
     char hex[17];  
     long long decimal=0;
    int binary = 0, octal=0  , rem , i=0, spare, decimal2 , hexadecimal , j=0;
    printf("enter hexadecimal number");
    gets(hex);
    int len = strlen(hex);
    len--;
  for(j=0; hex[j]!='\0'; j++)
    {

        if(hex[j]>='0' && hex[j]<='9')
        {
            rem = hex[j] - 48;
        }
        else if(hex[j]>='a' && hex[j]<='f')
        {
            rem = hex[j] - 97 + 10;
        }
        else if(hex[j]>='A' && hex[j]<='F')
        {
            rem = hex[j] - 65 + 10;
        }

        decimal += rem * pow(16, len);
        len--;
    }
    
  
    printf ("decimal is %d \n" , decimal);
    rem = 0;
    i = 0;
    decimal2 = decimal;
    while (decimal != 0)
    { 
        rem = (decimal%2) * pow (10 , i);
        binary += rem;
        decimal = decimal /2;
        i++;
    }
    printf ("binary number is %d \n" , binary );
    
    rem = 0;
    i = 0;
    while (decimal2 != 0)
    { 
        rem = (decimal2 % 8) * pow (10 , i);
        octal += rem;
        decimal2 = decimal2 /8;
        i++;
    }
    printf ("octal number is %d" , octal );

    return 0;
}
