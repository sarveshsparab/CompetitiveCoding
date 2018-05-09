#include<stdio.h>
int main(){
    int t,n,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&i);
        if(i==0){
            printf("Airborne wins.\n");
        }else{
            printf("Pagfloyd wins.\n");
        }
    }
    return 0;
}
