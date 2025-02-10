#include <stdio.h>
int main ()
{
    int a,f,i;
    printf ("saisir un nombre");
    scanf ("%d",&a);
    for (i=1;i<a;i++)
    {
        printf ("%d*",i);
    
    }
    printf ("%d=",a);
for (i=1;i<=a;i++)
    {
      f=f*i;
    }
       printf ("%d",f);
    return (0);
}