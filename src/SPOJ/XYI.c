#include<stdio.h>
int main(){
    int t,n,m,i,j,deg[2000],flag,cnt4,cnt3,cnt2,cnt,x,y,cntx,k;
    scanf("%d",&t);
    k=0;
    while(t--){
        scanf("%d %d",&n,&m);
        k++;
        memset(deg,0,sizeof(deg));
        cnt4=cnt3=cnt2=cnt=cntx=0;
        for(i=0;i<m;i++){
          scanf("%d %d",&x,&y);
          deg[x-1]++;
          deg[y-1]++;
        }
        flag=0;
        for(i=0;i<n;i++){
            if(deg[i]==4){cnt4++;}
            if(deg[i]==3){cnt3++;}
            if(deg[i]==2){cnt2++;}
            if(deg[i]==1){cnt++;}
            if(deg[i]>4){cntx++;}
        }
        if(cnt4==1  && cnt3==0 && cntx==0 && cnt==4)
        	flag=1;
        if(cnt4==0  && cnt3==1 && cntx==0 && cnt==3)
        	flag=2;
        if(cnt4==0  && cnt3==0 && cntx==0 && cnt==2)
        	flag=3;
        if(flag==0)
           printf("Case %d: NotValid\n",k);
        else if(flag==1)
           printf("Case %d: X\n",k);
        else if(flag==2)
           printf("Case %d: Y\n",k);
        else if(flag==3)
           printf("Case %d: I\n",k);
    }
    return 0;
}