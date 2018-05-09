#include <stdio.h>
#include<string.h>
int max(int a, int b){
    return (a>b)?a:b;
}
int d[2005][2005];
int v[2005];
int n;
int foo(int i,int j){
    if(d[i][j]!=-1)
        return d[i][j];
    int day=n-(j-i);
    if(i==j)
        return day*v[i];
    d[i][j]=max(day*v[i]+foo(i+1,j),day*v[j]+foo(i,j-1));
    return d[i][j];
}
int main(){
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            d[i][j]=-1;
    printf("%d",foo(0,n-1));
    return 0;
}
