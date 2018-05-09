#include<stdio.h>
#include<string.h>
int main()
{
	char marks[21],m;
	int a[21],len,i;
    scanf("%s",marks);
    len=strlen(marks);
    a[len-1]=1;
    if(marks[len-2]=='1'){
        a[len-2]=2;
    }
    else if(marks[len-2]=='2'){
        if(marks[len-1]=='0')
            a[len-2]=2;
        else
            a[len-2]=1;
    }else
        a[len-2]=1;

    for(i=len-3;i>=0;i--){
        if(marks[i]=='1'){
            a[i]=a[i+1]+a[i+2];
        }else if(marks[i]=='2'){
            if(marks[i+1]=='0')
                a[i]=a[i+1]+a[i+2];
            else
                a[i]=a[i+1];
        }else
            a[i]=a[i+1];
    }
    printf("%d",a[0]);
}
