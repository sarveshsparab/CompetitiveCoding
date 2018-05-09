#include <stdio.h>
int gcd(int num1,int num2){
    while(num1!=num2){
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
    }
    return num1;
}
int main(){
    int N,i;
    int x[1000],y[1000],z[1000];
    while(scanf("%d",&N)==1){
        if(N==0)
            break;
        for(i=0;i<N;++i)
            scanf("%d %d %d",&x[i],&y[i],&z[i]);
        int g=x[0];
        for(i=0;i<N;++i){
            g=gcd(g,x[i]);
            g=gcd(g,y[i]);
            g=gcd(g,z[i]);
        }
        long long ans=0;
        for(i=0;i<N;++i)
            ans+=(long long)(x[i]/g)*(y[i]/g)*(z[i]/g);
        printf("%lld\n",ans);
    }
    return 0;
}
