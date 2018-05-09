#include <stdio.h>
int max(int a,int b){
    return (a>b)?a:b;
}
int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		printf("%d\n", max(0, n-2));
	}
	return 0;
}
