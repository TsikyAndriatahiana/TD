#include <stdio.h>
int main ()
{
    int a;
    printf ("saisissez un nombre:");
    scanf ("%d",&a);
    if (a>0)
    {
        printf ("le nombre est positif");
    }
    else 
    {
        printf ("le nombre est negatif");
    }
    return (0);
}