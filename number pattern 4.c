#include <stdio.h>

int main() 
{
    int i , j ;
   for (i=1 ; i<6 ; i++)
   {
       for (j=1 ; j <6 ; j++)
       {   if (i>1 && i<5)
           {
               if (j>1 && j<5)
               printf ("0");
               else
               printf ("1");
           }
           else
           printf ("1");
       }
       printf ("\n");
       
    }
  
    return 0;
}