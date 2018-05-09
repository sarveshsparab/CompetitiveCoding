#include<stdio.h>
int main(){
    int t,n,row,r;
    char dir,seat;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n==1)
            printf("poor conductor\n");
        else{
            n--;
            row=n/5;
            r=n%5;
            if(r!=0)
                row++;
            if(row%2==1){
                if(r==1 || r==2)
                    dir='L';
                else
                    dir='R';
                if(r==1 || r==0)
                    seat='W';
                else if(r==2 || r==3)
                    seat='A';
                else
                    seat='M';
            }else{
                if(r==0 || r==4)
                    dir='L';
                else
                    dir='R';
                if(r==1 || r==0)
                    seat='W';
                else if(r==4 || r==3)
                    seat='A';
                else
                    seat='M';
            }
            printf("%d %c %c\n",row,seat,dir);
        }
    }
    return 0;
}
