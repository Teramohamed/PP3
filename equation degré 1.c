#include<stdio.h>
int main()
{
	double a,b,x;
	// saisi des nombres
	printf("\n entrer a \n");
	scanf("%lf",&a);
	printf("\n entrer b \n");
	scanf("%lf",&b);
    	if(a==0)
		 	
	 		if(b==0)
	 		
	 			printf("\n\t tout nombre est solution\n");
		 	
			else
			{
			
				printf("\n il n'existe pas de solution\n");
			}
		else
		{
		
			x=-b/a;
			printf("\nil s'agit dune equation du premier degre\n");
			printf("la solution est %.2lf",x);
		}
	return 0;
}
