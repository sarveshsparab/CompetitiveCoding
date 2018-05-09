#include <stdio.h>
int min(int a,int b){
    return (a<b)?a:b;
}
int A[1001];
int main(){
	int i,j,t;
	A[1]=1;
	A[0]=0;
	for(i=2;i<1001;i++){
		A[i]=10000;
		for(j=1;j*j<=i;j++){
			A[i]=min(A[i],1+A[i-j*j]);
		}
	}
	scanf("%d",&t);
	while(t--){
		scanf("%d",&i);
		printf("%d\n",A[i]);
	}
	return 0;
}
