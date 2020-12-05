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
    
    if (angle1 + angle2 + angle3 == 180)
    {
        printf ("triangle is valid");
    }
    else 
    {
        printf ("triangle is not valid");
    }
    return 0;
}
