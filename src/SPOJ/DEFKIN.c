#include<stdio.h>
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
int main(){
    int t,w,h,n,i,d_x,d_y;
    int x[40005],y[40005];
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&w,&h,&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&x[i],&y[i]);
        }
        qsort(x, n, sizeof(int), cmpfunc);
        qsort(y, n, sizeof(int), cmpfunc);
        if(n==0){
            //puts("case1");
            d_x=w;
            d_y=h;
        }else{
            //puts("case2");
            d_x=x[0]-0-1;
            d_y=y[0]-0-1;
            //printf("\n 1: **** %d %d ****\n\n",d_x,d_y);
            for(i=0;i<n-1;i++){
                if((x[i+1]-x[i]-1)>d_x)
                    d_x=x[i+1]-x[i]-1;
                if((y[i+1]-y[i]-1)>d_y)
                    d_y=y[i+1]-y[i]-1;
                //printf("\n **** %d %d ****\n\n",d_x,d_y);
            }

            if((w-x[n-1])>d_x){
                //puts("case3");
                d_x=w-x[n-1];
            }
            if((h-y[n-1])>d_y){
                //puts("case4");
                d_y=h-y[n-1];
            }
        }
        //printf("%d %d %d\n",d_x,d_y,d_x*d_y);
        printf("%d\n",d_x*d_y);
    }
    return 0;
}
