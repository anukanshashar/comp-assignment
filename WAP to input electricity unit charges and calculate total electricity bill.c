#include <stdio.h>

int main() 
{
   float eunit , ebill;
   printf ("enter amount of electricity units");
   scanf ("%f" , &eunit);
   if (eunit <= 50)
   {
       ebill = eunit * 0.5;
   }
   else if ( eunit > 50 && eunit <=150)
   {
       ebill = 25 + (eunit-50)*0.75;
   }
   else if ( eunit > 150 && eunit <= 250)
   {
       ebill = 100 + (eunit-150)*1.2;
   }

   else 
   {
       ebill = 220 + (eunit-250)*1.5;
   }
   
   ebill *= 1.2;
   
   printf ("your total bill amount is Rs. %f" , ebill);
    return 0;
}