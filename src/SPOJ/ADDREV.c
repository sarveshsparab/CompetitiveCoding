#include <stdio.h>
int l,m,n,p,o;
int rev(int a);
int main(void)
{   int N,a1,a2;
	scanf("%d",&N);
	while(N>0)
	{
		scanf("%d %d",&a1,&a2);
	    m=rev(a1);
	    n=rev(a2);
		p=m+n;
		o=rev(p);
		printf("%d\n",o);
		N--;
	}
	return 0;
}
int rev(int a)
{   int x,y,z;
    z=0;
	while(a>=10)
	{
		x=a%10;
		y=a/10;
		a=y;
		z=x+10*z;
	}
	l=10*z+a;
	return l;
}
