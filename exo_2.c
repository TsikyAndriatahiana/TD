#include <stdio.h>
int main( )
{
	int a,b,c;
	printf ("saisir deux nombres");
	scanf ("%d",&a);
	scanf ("%d",&b);
	if (a<0 && b<0||a>0 && b>0)
	{
		printf ("leur produit est positif");
	}
	else if (a<0 && b>0||b<0 && a>0)
	{
		printf ("leur produit est négatif");
	}
	else
	printf("nul");
	return (0);
}

