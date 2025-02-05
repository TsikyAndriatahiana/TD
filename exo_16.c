#include <stdio.h>
int main ()
{
    int a,b,i,d,e;
    printf ("saisir un nombre");
    scanf ("%d",&a);
    for (i=1;i<a;i++)
    {
    printf ("%d! +",i);
    }
    printf ("%d!\n",a);
    d=1;
    b=0;
    for (i=1;i<=a;i++)
    {
        d=d*i;
        b=b+d;
    }
    e=b;
    printf ("la somme des factoriels est %d\n",b);
    return 0;

}