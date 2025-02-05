#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("saisissez deux nombres\n");
    scanf ("%d",&a);
    scanf ("%d",&b);
    c=a*b;
    printf ("%d*%d=%d\n",a,b,c);
    if (c<0)
    {
        printf ("le produit des deux nombres est négatifs");
    }
    else
    {
        printf ("le produit des deux nombres est positifs");
    }
    return (0);
}
