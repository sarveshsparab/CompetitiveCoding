#include<stdio.h>
long long cut(long long n){
    long long i=3,ans;
    if(n<=1){
        return 0;
    }
    if(n==2){
        return 1;
    }else{
      ans=2;
      while(i<=n){
        i+=ans;
        if(i>n){
            break;
        }
        ans++;
      }
      return ans;
    }
}
int main(){
    long long t,n;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        printf("%lld\n",cut(n));

    }
    return 0;
}
