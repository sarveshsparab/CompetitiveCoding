#include<stdio.h>
int main(){
    int t,n,ans,t_copy;
    scanf("%d",&t);
    t_copy=t;
    while(t--){
        scanf("%d",&n);
        if(t==(t_copy-1)){
            ans=n;
        }else{
            ans=ans^n;
        }
    }
    printf("%d",ans);
    return 0;
}
