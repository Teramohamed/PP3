#include<stdio.h>
void aff(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
	 printf("%d",i);
	}
}
int somm(int n)
{
   int i,s;
   s=0;
   i=1;
   while(i<=n)
  { s=s+i;
    i=i+1; }
   return s;
}
int fac(int n)
{
    if(n==0)
	{
	  return 1;
	}
	else 
	{
	  return n*fac(n-1);
	}
}
int main()
{ int a;
printf("entrer a: ");
scanf("%d",&a);
aff(a);
printf("\n%d",somm(a));
printf("\n!%d=%d",a,fac(a));
return 0;
}
