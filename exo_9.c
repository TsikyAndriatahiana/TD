#include <stdio.h>
int main()
{
    int a,s,i;
    printf ("saisir un nombre\n");
    scanf ("%d",&a);
    for (i=2;i<=a;i++)
    {
        s=i%2;
        if (s==0)
        {
            printf (" %d",i);
        }
        else
        {
            continue;
        }
        
    }
    return (0);

}