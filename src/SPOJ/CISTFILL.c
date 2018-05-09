#include <stdio.h>
int main(){
	int t, n, i, V;
	double low, high, level, vol;
	int b[50000], h[50000], w[50000], d[50000];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for(i=0, vol=0; i<n; i++){
			scanf("%d%d%d%d", &b[i], &h[i], &w[i], &d[i]);
			vol+=h[i]*w[i]*d[i];
		}
		scanf("%d", &V);
		if(vol<V){
			printf("OVERFLOW\n");
			continue;
		}
		low=0;
		high=1e7;
		while(high-low>0.000001){
			level=(high+low)/2;
			vol=0;
			for(i=0; i<n; i++)
				if(b[i]>=level)
					continue;
				else if(b[i]<level && level<=b[i]+h[i])
					vol+=(level-b[i])*w[i]*d[i];
				else if(level>b[i]+h[i])
					vol+=h[i]*w[i]*d[i];
			if(vol>=V)
				high=level;
			else
				low=level;
		}
		printf("%.2f\n", level);
	}
	return 0;
}