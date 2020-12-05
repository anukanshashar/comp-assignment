#include <stdio.h>

int main() 
{
    int sub1 , sub2 , sub3 , sub4 , sub5 , sum , percentage;
    printf ("enter marks of physics out of hundred");
    scanf ("%d" , &sub1);
    printf ("enter marks of chemistry out of hundred");
    scanf ("%d" , &sub2);
    printf ("enter marks of biology out of hundred");
    scanf ("%d" , &sub3);
    printf ("enter marks of maths out of hundred");
    scanf ("%d" , &sub4);
    printf ("enter marks of computer out of hundred");
    scanf ("%d" , &sub5);
    
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = sum/5;
    printf ("percentage scored is %d percent \n" , percentage);
    
    if (percentage < 40)
    {
        printf ("grade is F");
    }
    else if (percentage >= 40 && percentage < 60 )
    {
        printf ("grade is E");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf ("grade is D");
    }
    else if (percentage >=70 && percentage <80)
    {
        printf ("grade is C");
    }
    else if (percentage >= 80 && percentage <90)
    {
        printf ("grade is B");
    }
    else
    {
        printf ("grade is A");
    }
    return 0;
}