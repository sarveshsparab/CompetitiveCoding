#include <stdio.h>
int gcd(int num1,int num2){
    while(num1!=num2){
        if(num1>num2)
            num1-=num2;
        else
            num2-=num1;
    }
    return num1;
}
int main(){
    int t,a,b,g;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        g=gcd(a,b);
        printf("%d %d\n",b/g,a/g);
    }
    return 0;
}
