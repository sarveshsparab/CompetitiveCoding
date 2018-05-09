#include<stdio.h>
int main(){
    long long int a[24];
    int t, x,i;
    a[0] = 1;
    a[1] = 3;
    for(i = 2; i < 24; i++)
        a[i] = 2*a[i-1] + a[i-2];
    scanf("%d",&x);
    printf("%d\n",a[x]);
    return 0;
}
