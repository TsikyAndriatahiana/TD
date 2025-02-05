#include <stdio.h>
int main ()
{
    int a,i;
    printf ("saisir un nombre");
    scanf ("%d",&a);
    for (i=1;i<a;i++)
    {
        printf ("%d*",i);
    
    }
    printf ("%d",a);
    return (0);
}