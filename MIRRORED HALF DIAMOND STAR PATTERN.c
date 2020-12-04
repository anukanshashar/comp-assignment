#include <stdio.h>

int main()
{
    int i, j;
    int star, spaces;
    
    
    spaces = 4;
    star = 1;
    
    for(i=1; i<10; i++)
    {
        for(j=1; j<=spaces; j++)
            printf(" ");
        
        for(j=1; j<=star; j++)
            printf("*");
        
        printf("\n");
        
        if(i < 5) 
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }

    return 0;
}