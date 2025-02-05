#include <stdio.h>
int main ()
{
    int A,B,C;
    printf ("saisissez deux valeures\nA:");
    scanf ("%d",&A);
    printf ("B:");
    scanf ("%d",&B);
    C=A;
    A=B;
    B=C;
    printf ("leur valeur ce sont échangés donc\nA:%d\nB:%d",A,B);
    return (0);

}