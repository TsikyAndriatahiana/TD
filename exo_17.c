#include <stdio.h>
int main ()
{
    int a,i;
    float b,c,e;
    float j=1;
    b=1;
    c=0;
    printf ("saisir un nombre\n");
    scanf ("%d",&a);
    for (i=1;i<a;i++)
    {
        printf ("1/%d! +",i);
    
    }
    printf ("1/%d\n",a);
    
    for (i=1;i<=a;i++)
    {
    b=b*(1/j);
    c=c+b;
    j++;
    }
    e=c;
    printf ("la somme est %f\n",e);
    return (0);
}