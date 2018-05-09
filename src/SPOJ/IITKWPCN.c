#include<stdio.h>
int main(){
    int t,x,y;
    scanf("%d",&t);
    double ans;
    while(t--){
        scanf("%d %d",&x,&y);
        ans=(double)(y%2);
        printf("%0.6lf\n",ans);
    }
    return 0;
}