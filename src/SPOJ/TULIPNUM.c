#include<stdio.h>
int main(){
    int t,i,n,q,x,y,j;
    int cnt[100005];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&n,&q);
        cnt[0]=0;
        cnt[1]=1;
        scanf("%d",&x);
        for(j=1;j<n;j++){
            scanf("%d",&y);
            if(y!=x)
                cnt[j+1]=cnt[j]+1;
            else
                cnt[j+1]=cnt[j];
            x=y;
        }
        printf("Case %d:\n",i);
		for(j=0;j<q;j++){
		    scanf("%d %d",&x,&y);
            if(cnt[x]!=cnt[x-1])
				printf("%d\n",cnt[y]-cnt[x-1]);
			else
				printf("%d\n",cnt[y]-cnt[x-1]+1);
		}
    }
    return 0;
}
