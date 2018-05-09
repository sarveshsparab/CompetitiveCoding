#include <stdio.h>
int main(){
    int t,w,x,y;
    int n;
    int l,r;
    float f;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&x,&y,&w);
        l=r=1;
        while(x!=y){
            if(x>y){
               if(x%2==1){
                    x=(x-1)/2;
                    if(x%2==1){
                        l=l*4;
                    }else{
                        l=l*2;
                    }
               }else{
                   x=x/2;
                   l=l*2;
               }
            }else{
               if(y%2==1){
                    y=(y-1)/2;
                    if(y%2==1){
                        r=r*4;
                    }else{
                        r=r*2;
                    }
               }else{
                   y=y/2;
                   r=r*2;
               }
            }
        }
        f=((float)l)/r;
        printf("%f\n",f*w);
    }
    return 0;
}
