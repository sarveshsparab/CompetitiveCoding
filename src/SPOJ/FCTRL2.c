#include<stdio.h>
void fact(int n,int farr[][1000]);
int main(){
    int t,i,n,j;
    scanf("%d",&t);
    int farr[100][1000];
    for(i=0;i<100;i++){
        farr[i][0]=-1;
    }
    farr[0][0]=1;farr[0][1]=-1;
    while(t--){
        scanf("%d",&n);
        fact(n,farr);
        printf("\n");
    }
    return 0;
}
void fact(int n,int farr[][1000]){
    int i,j,carry,new_num,mid_prod;
    if(farr[n-1][0]!=-1){
        j=0;
        while(farr[n-1][j]!=-1){
            j++;
        }
        for(i=(j-1);i>=0;i--){
            printf("%d",farr[n-1][i]);
        }
    }else{
        j=0;
        carry=0;
        while(farr[j][0]!=-1){
            j++;
        }
        new_num=j+1;
        j--;
        for(i=0;farr[j][i]!=-1;i++){
            mid_prod=new_num*farr[j][i];
            farr[new_num-1][i]=(mid_prod+carry)%10;
            carry=(mid_prod+carry)/10;
        }
        while(carry>0){
            farr[new_num-1][i]=carry%10;
            carry=carry/10;
            i++;
        }
        farr[new_num-1][i]=-1;
        fact(n,farr);
    }
}
