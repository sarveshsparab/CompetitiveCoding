#include<stdio.h>
int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int n,m,k,i,j,mi;
    int rates[100][100],d[100][100];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&rates[i][j]);
            if(i==n-1)
                d[i][j]=rates[i][j];
            else
                d[i][j]=0;
        }
    }
    for(i=n-2;i>=0;i--){
        for(j=0;j<m;j++){
            if(j==0)
                d[i][j]=rates[i][j]+min(d[i+1][j],d[i+1][j+1]);
            else if(j==(m-1))
                d[i][j]=rates[i][j]+min(d[i+1][j],d[i+1][j-1]);
            else
                d[i][j]=rates[i][j]+min(d[i+1][j-1],min(d[i+1][j],d[i+1][j+1]));
            if(i==0 && j>=1)
                if(d[i][j]<d[i][j-1])
                    mi=d[i][j];
        }
    }
    printf("%d",mi);
    return 0;
}
