#include<stdio.h>
#define root2 1.4142135623730950488016887
int main(){
    int t,r;
    double ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&r);
        ans=8*(2-root2)*r*r*r;
        printf("%.4lf\n",ans);
    }
    return 0;
}
