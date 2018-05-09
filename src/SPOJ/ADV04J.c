#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    long long int a;
    while(t--)
    {
        scanf("%lld",&a);
        int res=0;
        while(a>0)
        {
            if(a==2){
                res+=2;
                break;
            }
            if(a%2==0)
                a/=2;
            else
                a = (a/2)+1;
            res++;
        }
    printf("%d\n",res);
    }
    return 0;
}
