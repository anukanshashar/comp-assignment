#include <stdio.h>

int main() 
{
    int angle1 , angle2 , angle3;
    printf ("enter first angle in degrees");
    scanf ("%d" , &angle1);
    printf ("enter second angle in degrees");
    scanf ("%d" , &angle2);
     printf ("enter third angle in degrees");
    scanf ("%d" , &angle3);
    
    if (angle1 ==angle2 && angle1 == angle3 )
    {
        printf ("triangle is equilateral");
    }
     else  if (angle1 ==angle2 || angle1 == angle3 || angle2 == angle3 )
    {
        printf ("triangle is isosceles");
    }
    else 
    {
        printf ("triangle is scalene");
    }
    return 0;
}
