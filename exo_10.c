#include <stdio.h>
int main ()
{
    int a,b,i,n;
    printf ("saisir un nombre\n");
    scanf ("%d",&a);
    for (i=1;i<=a;i++)
    {
        b=a%i;
        if (b==0)
        {
            printf ("%d",i);
        }
    }
   return (0);
}