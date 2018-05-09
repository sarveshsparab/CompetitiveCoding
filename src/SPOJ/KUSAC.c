#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int foo(int,int);
int main(){
    int n,m,ans;
    scanf("%d %d",&n,&m);
    ans=foo(n,m);
    printf("%d\n",ans);
    return 0;
}
int foo(int n,int m){
    int k,i,cnt;
    if(n==0 || m==0){
        return 0;
    }
    if(n==m){
        return 0;
    }
    if(n%m==0){
        return 0;
    }
    if(n>m){
        k=n/m;
        return foo(n-k*m,m);
    }
    if(n<m){
        k=m*n;
        cnt=0;
        for(i=0;i<=k;i+=n){
           if(i%m!=0 && i!=0){
             cnt++;
           }
        }
        return cnt;
    }
}
