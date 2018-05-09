#include<stdio.h>
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long unsigned int s=0,n,y,i;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{

			scanf("%lld",&y);
			if(i%2)
				s -= y;
			else
				s += y;

		}
		if(s)
		{
			printf("NO\n");
		}
		else
			printf("YES\n");
	}
	return 0;
}