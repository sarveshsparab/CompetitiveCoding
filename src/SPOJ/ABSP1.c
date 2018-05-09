#include<stdio.h>
int main(){
    int t,n,i;
    long long int sum;
    int a[10005];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sum=0;
        for(i=0;i<n/2;i++){
            sum+=((n- 2*i -1)*(a[n-i-1] - a[i]));
        }
        printf("%lld\n",sum);
    }
    return 0;
}
