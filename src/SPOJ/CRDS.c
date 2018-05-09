#include<stdio.h>
int main(){
    int t;
    long long int n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%lld", &n);
        k = 3 * ((n * (n + 1))/2) - n;
        k = k % 1000007;
        printf("%lld\n", k);
    }
    return 0;
}
