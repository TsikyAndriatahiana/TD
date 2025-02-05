#include <stdio.h>
int main ()
{
    int a,b;
    printf ("saisissez un nombre\n");
    scanf ("%d",&a);
    b=1;
    while (a>0)
    {
        b=b*a;
        a=a-1;
    
    }
    printf ("la factorielle est %d",b);
    return (0);
}