#include <stdio.h>
#include <math.h>
int main ()
{
	float a,b,c,deltat,x1,x2,m,n,d;
	printf ("saisissez les coefficients\na:");
	scanf ("%2f",&a);
	printf ("b:");
	scanf ("%2f",&b);
	printf ("c:");
	scanf ("%2f",&c);
	if (a==0)
	{
	    printf ("ce n'est pas une equation du second degré");
	}
	else
	{
	    deltat=(b*b)-(4*a*c);
	        if (deltat==0)
		{
		    x1=-b/2*a;
		   printf ("les solutions:\nx1=%2f ",x1);
		}
		    else if (deltat>0)
		    {
			x1=-b-sqrt(deltat)/2*a;
			x2=-b+sqrt(deltat)/2*a;
		        printf ("les solutions: \nx1=%2f \nx2=%2f ",x1,x2);
		    }
			  else
			  {
			      d=sqrt(-deltat);
			      m=-b/2*a;
			      n=-d/2*a;
			      printf ("x1=%2f+%2fi\n",m,n);
			      printf ("x2=%2f-%2fi\n",m,n);
			  }

	}
    return (0);
}