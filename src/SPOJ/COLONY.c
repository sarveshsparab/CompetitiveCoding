#include<stdio.h>
char func(int ,long long int);
int main(){
    char ret_char;
    int y,r;
    long long int p;
    scanf("%d",&y);
    scanf("%lld",&p);
    ret_char=func(y,p);
    r=p%4;
    if(ret_char=='B'){
        if(r==0 || r==3){
            printf("blue");
        }else{
            printf("red");
        }
    }else if(ret_char=='R'){
        if(r==0 || r==3){
            printf("red");
        }else{
            printf("blue");
        }
    }
    return 0;
}
char func(int y, long long int p){
    long long int sector;
    int parent;
    if(y==0){
        return 'R';
    }else if(y==1){
        if(p==0){
            return 'B';
        }else if(p==1){
            return 'R';
        }
    }else{
        sector=p/4;
        parent=y-2;
        return func(parent,sector);
    }
}
