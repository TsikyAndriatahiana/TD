#include <stdio.h>
int main ()
{
    int a,i;
    float s,j;
    printf ("saisir un nombre");
    scanf("%d",&a);
    for (i=1;i<a;i++)
    {
    printf ("1/%d+",i);
    }
    printf ("1/%d\n",a);
    s=1;
    j=1;
    for (i=1;i<=a;i++)
    {
        s=s+(1/j);
        j++;
    }
    s=s-1;
    printf ("la somme est %f\n",s);
    return (0);

}