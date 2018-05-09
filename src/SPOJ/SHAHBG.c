#include <stdio.h>
int line[20002];
int main() {
	int n,i,a,cnt;
	scanf("%d", &n);
	for(cnt=i=0;i<n;i++){
		scanf("%d",&a);
        line[a]=1;
		if(line[a-1]==line[a+1])
            cnt+=line[a-1] ? -1 : 1;
		printf("%d\n",cnt);
	}
	printf("Justice\n");
	return 0;
}
