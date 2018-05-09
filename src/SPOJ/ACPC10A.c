#include<stdio.h>
int main(){
    int a1,a2,a3,d,r;
    scanf("%d %d %d",&a1,&a2,&a3);
    while(1){
    if(a1==0 && a2==0 && a3==0){
        break;
    }
    else{
        if((a2-a1)==(a3-a2)){
            d=a2-a1;
            printf("AP ");
            printf("%d\n",(d+a3));
        }else if(a2!=0){
            if((a2/a1)==(a3/a2)){
                r=a2/a1;
                printf("GP ");
                printf("%d\n",(r*a3));
            }
        }
    }
    scanf("%d %d %d",&a1,&a2,&a3);
    }
    return 0;
}
