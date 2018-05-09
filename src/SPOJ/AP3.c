#include<stdio.h>
#include<math.h>
int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long int a3,a3l,s,i,a,d,len;
        long double n,sq,diff;
        scanf("%lld",&a3);
        scanf("%lld",&a3l);
        scanf("%lld",&s);
        sq=sqrtl(((5.0*a3l+7.0*a3+2.0*s)*(5.0*a3l+7.0*a3+2.0*s))-(48.0*(a3l+a3)*s));
        n=((5.0*a3l+7.0*a3+2.0*s)+sq)/(2.0*(a3l+a3));
        len=llrintl(n);
        printf("%lld\n",len);
        diff=(a3l-a3)/(len-6.0);
        d=llrintl(diff);
        a=(a3-(2*d));
        for(i=0;i<len;i++){
            printf("%lld ",a+i*d);
        }
        printf("\n");
    }
    return 0;
}