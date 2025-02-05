#include <stdio.h>
int main ()
{
    int a,b,c,d,s,m;
    printf ("saisissez deux notes\n");
    scanf ("%d",&a);
    scanf ("%d",&b);
    printf ("saisissez leur coefficients\n");
    scanf ("%d",&c);
    scanf ("%d",&d);
    s=(a*c)+(b*d);
    m=s/(c+d);
    printf ("la moyenne est %d",m);
    return (0);
}