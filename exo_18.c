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
            printf ("les diviseurs communs sont %d\n",d);
            e=d;
        }
    }
    printf ("le PGCD est %d\n",e);
    return (0);
}

