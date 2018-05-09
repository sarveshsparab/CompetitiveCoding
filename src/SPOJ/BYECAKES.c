#include<stdio.h>
#include<math.h>
int main(){
    int E,F,S,M,_E,_F,_S,_M;
    int max;
    scanf("%d %d %d %d %d %d %d %d",&E,&F,&S,&M,&_E,&_F,&_S,&_M);
    while(E!=-1){
        max=(int)ceil(floor(E)/floor(_E));
        if((int)ceil(floor(F)/floor(_F))>max)
            max=(int)ceil(floor(F)/floor(_F));
        if((int)ceil(floor(S)/floor(_S))>max)
            max=(int)ceil(floor(S)/floor(_S));
        if((int)ceil(floor(M)/floor(_M))>max)
            max=(int)ceil(floor(M)/floor(_M));
        printf("%d %d %d %d\n",(max*_E-E),(max*_F-F),(max*_S-S),(max*_M-M));
        scanf("%d %d %d %d %d %d %d %d",&E,&F,&S,&M,&_E,&_F,&_S,&_M);
    }
    return 0;
}
