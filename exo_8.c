#include <stdio.h>
int main ()
{
    int a,i=1;
    printf ("saisir un nombre");
    scanf ("%d",&a);
    while (i<=a)
    {
        printf (" %d",i);
        i++;
    }
    return (0);
}