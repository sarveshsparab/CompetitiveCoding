#include<stdio.h>
#include<math.h>
int main(){
    int t,i;
    scanf("%i", &t);
    for(i=1; i<=t; i++){
        unsigned long long n;
        scanf("%llu", &n);
        unsigned long long s=sqrt(n);
        if(s*s==n || (s-1)*(s-1)==n || (s+1)*(s+1)==n)
        printf("Case %i: Yes\n", i);
        else
        printf("Case %i: No\n", i);
    }
    return 0;
}
