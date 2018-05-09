#include<stdio.h>
int min(int a1, int a2){
    return (a1<a2)?a1:a2;
}
int max(int a1, int a2){
    return (a1>a2)?a1:a2;
}
int main(){
    int M,N,n,k,i,j,s,r,p;
    int A[21],B[21],a[21];
    int S[101][21];
    scanf("%d %d",&M,&N);
    n=M; k=N;
    for(i=1;i<=M;i++){
        scanf("%d %d",&A[i],&B[i]);
        a[i]=B[i]-A[i];
        k-=A[i];
    }
    for(p=0;p<=min(a[1],n);p++)
        S[1][p]=1;
    for(;p<=n;p++)
        S[1][p]=0;
    for(i=2;i<=n;i++){
        for(j=0;j<=k;j++){
            s=0;
            for(r=max(0,j-a[i]);r<=j;r++){
                s+=S[i-1][r];
            }
            S[i][j]=s;
        }
    }
    printf("%d\n",S[n][k]);
    return 0;
}
