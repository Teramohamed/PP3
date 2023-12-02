#include<stdio.h>
#define n 5
int main()
{
	int i,tab[n],s=0,p=1;
	float m;
	printf("creation de tableau \n");
	for(i=0;i<5;i++)
	{
		printf("tab[%d]=",i+1);
		scanf("%d",&tab[i]);
		s=s+tab[i];
		p=p*tab[i];
	}
	m=s/5;
	printf("la somme est : %d\n",s);
	printf("le produit est : %d\n", p);
	printf("moyenne :%.2f\n",m);
	return 0;
}
