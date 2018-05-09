#include<stdio.h>
int main(){
    long long int t,ft3,lt3,sum,n,d,a,i;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld %lld %lld",&ft3,<3,&sum);
        n=2*sum/(ft3+lt3);
        d=(lt3-ft3)/(n-5);
        a=ft3-2*d;
        printf("%lld\n",n);
        for(i=1;i<=n;i++){
            printf("%lld ",a);
            a=a+d;
        }
    }
    return 0;
}
