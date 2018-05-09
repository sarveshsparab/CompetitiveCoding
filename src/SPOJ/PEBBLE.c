#include<stdio.h>
#include<string.h>
int main(){
    int i,cnt,t=0;
    char str[100000];
    while(scanf("%s",str)!=EOF){
        if(str[0]=='1'){
            cnt=1;
        }else{
            cnt=0;
        }
        for(i=0;i<(strlen(str)-1);i++){
            if(str[i]!=str[i+1])
                cnt++;
        }
        printf("Game #%d: %d\n",++t,cnt);
    }
    return 0;
}
