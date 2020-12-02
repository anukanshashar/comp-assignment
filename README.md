# COMPUTER ASSIGNMENT part 1

WAP to count no. of digits in a number

#include <stdio.h>

int main()
{
    int num , i;
    printf("enter a number");
    scanf ("%d" , &num );
    for (i=1 ; num>10 ; i++)
    {   
        num = num/10;
    }
    printf ("the number of digits are %d" , i);
        

    return 0;
}

WAP to swap the first and last digits of a number

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


WAP to find frequency of each digit in a no.
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

WAP to enter a number and print it in words
#include <stdio.h>

int main()
{
    int num , rem , i, n=0;
    printf("enter number");
    scanf ("%d" , &num);
    while(num != 0)
    {
        n = (n * 10) + (num % 10);
        num = num/10;
    }
    for (i=0 ; n>0 ; i++)
    {
        rem = n%10;
        switch (rem)
        {
            case 0 : printf ("zero \t");
            break;
            case 1 : printf ("one\t");
            break;
            case 2 : printf ("two\t");
            break;
            case 3 : printf ("three\t");
            break;
            case 4 : printf ("four\t");
            break;
            case 5 : printf ("five\t");
            break;
            case 6 : printf ("six\t");
            break;
            case 7 : printf ("seven\t");
            break;
            case 8 : printf ("eight\t");
            break;
            case 9 : printf ("nine\t");
            break;
           
        }
        
        n = n/10;
        
    }

    return 0;
}

WAP to print all ASCII values with their characters
#include <stdio.h>

int main()
{
    int i;
    char c;
    for (i=0 ; i<256 ; i++)
    {
        printf("%c" , c);
        c++;
    }
    

    return 0;
}

WAP to find one's complement of a binary number

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

WAP to find two's complement of a binary number

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

WAP to convert binary to octal , hexa decimal and decimal number
#include <stdio.h>
#include <math.h>
int main()
{
    int binary, octal , decimal=0 , rem , i=0, spare, decimal2 , hexadecimal = 0 ;
    printf("enter binary number");
    scanf ("%d" , &binary);
    
    while (binary !=0)
    {
        rem = binary %10;
        spare = rem * pow (2 , i);
        decimal += spare;
        binary = binary / 10;
        i++;
    }
    printf ("decimal is %d \n" , decimal);
    rem = 0;
    i = 0;
    decimal2 = decimal;
    while (decimal != 0)
    { 
        rem = (decimal%8) * pow (10 , i);
        octal += rem;
        decimal = decimal /8;
        i++;
    }
    printf ("octal number is %d \n" , octal );
    
    rem = 0;
    i = 0;
    while (decimal2 != 0)
    { 
        rem = (decimal2 % 16) * pow (10 , i);
        hexadecimal += rem;
        decimal2 = decimal2 /16;
        i++;
    }
    printf ("hexadecimal number is %d" , hexadecimal );

    return 0;
}

WAP to convert octal to binary , decimal and hexadecimal number


#include <stdio.h>
#include <math.h>
int main()
{
    int binary = 0, octal , decimal=0 , rem , i=0, spare, decimal2 , hexadecimal = 0 ;
    printf("enter octal number");
    scanf ("%d" , &octal);
    
    while (octal !=0)
    {
        rem = octal %10;
        spare = rem * pow (8 , i);
        decimal += spare;
        octal = octal / 10;
        i++;
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
        rem = (decimal2 % 16) * pow (10 , i);
        hexadecimal += rem;
        decimal2 = decimal2 /16;
        i++;
    }
    printf ("hexadecimal number is %d" , hexadecimal );

    return 0;
}


WAP to convert hexadecimal to binary , decimal and octal number

#include <stdio.h>
#include <math.h>
int main()
{
    int binary = 0, octal=0 , decimal=0 , rem , i=0, spare, decimal2 , hexadecimal;
    printf("enter hexadecimal number");
    scanf ("%d" , &hexadecimal);
    
    while (hexadecimal !=0)
    {
        rem = hexadecimal %10;
        spare = rem * pow (16 , i);
        decimal += spare;
        hexadecimal = hexadecimal / 10;
        i++;
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
