#include <stdio.h>
#include <math.h>
int main ()
{
    int a,b,c,i;
    printf ("saisir un nombre");
    scanf ("%d",&a);
    b=10;
    c=1;
    for (i=0;i<a;i++)
    {
        printf ("%d^%d+",b,i);
    
    }
    printf ("%d^%d\n",b,a);
    for (i=1;i<=a;i++)
    {
        c=pow(10,i)+c;
    
    }
    c=c-1;
    printf ("la somme des puissances est %d\n",c);
    return (0);
}