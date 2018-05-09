#include<stdio.h>
#define tx 65.454545
int part(int t){
    int i;
	for(i=1; i<=23; i++){
		if(t>=(i-1)*tx && t<i*tx)
			return i;
	}
}
int main(){
	int t,t1,t2;
	char inTime[6];
	scanf("%i", &t);
	while(t-->0){
		int hours1=0, mins1=0;
        scanf("%s",inTime);
        t1=((inTime[0]-'0')*10+(inTime[1]-'0'))*60+((inTime[3]-'0')*10+(inTime[4]-'0'));
        scanf("%s",inTime);
        t2=((inTime[0]-'0')*10+(inTime[1]-'0'))*60+((inTime[3]-'0')*10+(inTime[4]-'0'));
		printf("%i\n", part(t2)-part(t1));
	}
	return 0;
}
