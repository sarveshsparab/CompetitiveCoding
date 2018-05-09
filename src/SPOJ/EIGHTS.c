#include<stdio.h>
int main()
{
    int te;
    scanf("%d",&te);
    while(te--)
    {
        long long n;
        scanf("%lld",&n);
        long long a;
        a=192+(n-1)*250;
        printf("%lld\n",a);
    }
    return (0);
}