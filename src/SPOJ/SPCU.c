#include<stdio.h>
int main(){
    int t, n,i;
    scanf("%d", &t);
    while(t--){
        int a;
        int hash[100001] = {0};
        scanf("%d", &n);
        int errorFound = 0;
        for(i = 1 ; i <= n; ++i){
            scanf("%d", &a);
            if( a > i - 1 )
                errorFound = 1;
        }
        if(errorFound)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}