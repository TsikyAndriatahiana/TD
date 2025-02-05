#include <stdio.h>
int main ()
{
    int a,b,e,d=0;
    printf ("saisisr un nombre\n");
    scanf ("%d",&a);
    scanf ("%d",&b);
    while (d<=a && d<=b)
    {
        d++;
        if (a%d==0 && b%d==0)
        {
            e=d;
        }
    }
    printf ("le PGCD est %d\n",e);
    if (e==1)
    {
        printf ("les deux nombres sont premiers entre eux");
    }
    else
    {
        printf ("les deux nombres ne sont pas premiers entre eux");
    }

    return (0);
}
