#include<stdio.h>
int main(){
    int i,t;
    long long int f[45];
    f[0]=1;
    f[1]=2;
    for(i=2;i<45;i++){
        f[i]=f[i-1]+f[i-2];
    }
    scanf("%d",&t);
    while(t--){
        scanf("%d",&i);
        printf("%lld\n",f[i]);
    }
    return 0;
}
