#include <stdio.h>
int main ()
{
    int a=0,b=0,c=0,m;
    printf ("saisissez trois valeurs\n");
    scanf ("%d",&a);
    scanf ("%d",&b);
    scanf ("%d",&c);
    if (a<c && b<c)
    {
         m=c;
        printf ("la valeur maximum est %d",m);
    }    
    else if (a<b && c<b)
    { 
       m=b;
       printf ("la valeur maximum est %d",m);
    }
     else 
    {
        m=a;
        printf ("la valeur maximum est %d",m);
    }
            
    return (0);
}