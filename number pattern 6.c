#include <stdio.h>

int main() 
{
    int i , j ;
   for (i=1 ; i<6 ; i++)
   {
       for (j=1 ; j <6 ; j++)
       {   if (i%2 ==1)
           {
               if (j%2 == 1)
               printf ("1");
               else
               printf ("0");
           }
           else
           {
               if (j%2 == 1)
               printf ("0");
               else
               printf ("1");
           }
       }
       printf ("\n");
       
    }
  
    return 0;
}