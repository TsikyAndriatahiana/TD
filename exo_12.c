#include <stdio.h>
int main ()
{
    int a,s,i;
    printf ("saisir un nombre");
    scanf ("%d",&a);
    for (i=1;i<a;i++)
    {
      printf ("%d+",i);
    }
      printf ("%d=",a);

    s=0;
    for (i=1;i<=a;i++)
    {
        s=s+i;
    }
    printf ("%d",s);
    return (0);
}