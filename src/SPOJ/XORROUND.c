#include<stdio.h>
int mat[505],a[505],ans[505],n;
void multiply(int *a,int *b){
	int arr[505],i,j;
	for(i=0;i<n;i++){
		arr[i]=0;
		for(j=0;j<n;j++)
			arr[i]^=(a[j]*b[(n-i+j)%n]);
	}
	for(i=0;i<n;i++)
		ans[i]=arr[i];
}
void power(int k){
	if(k<=0)
		return;
	power(k>>1);
	multiply(ans,ans);
	if(k&1)
		multiply(ans,mat);
	return;
}
int main(){
	int t,k,i,j,q;
	scanf("%d",&t);
	while(t--){
		for(i=0;i<505;i++)
			ans[i]=a[i]=mat[i]=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			ans[i]=mat[i]=0;
		}
		ans[0]=1;
		mat[0]=mat[1]=mat[n-1]=1;
		power(k);
		for(i=0;i<n;i++){
			q=0;
			for(j=0;j<n;j++){
				q^=(a[j]*ans[(n-i+j)%n]);
			}
			printf("%d ",q);
		}
		printf("\n");
	}
	return 0;
}