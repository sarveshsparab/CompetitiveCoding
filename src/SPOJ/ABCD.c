#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,i,N;
    char *f,*s ,t;
    f=(char *)malloc(sizeof(char)*100005);
    s=(char *)malloc(sizeof(char)*100005);
    memset(f,'\0',100005);
    memset(s,'\0',100005);
    scanf("%d",&n);
    scanf("%s",f);
    N=2*n;
    for(i=0;i<N;i=i+2){
        if(f[i]=='A' && f[i+1]=='B'){
            s[i]='C';
            s[i+1]='D';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='A' && f[i+1]=='C'){
            s[i]='B';
            s[i+1]='D';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='A' && f[i+1]=='D'){
            s[i]='B';
            s[i+1]='C';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='B' && f[i+1]=='A'){
            s[i]='C';
            s[i+1]='D';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='B' && f[i+1]=='C'){
            s[i]='A';
            s[i+1]='D';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='B' && f[i+1]=='D'){
            s[i]='A';
            s[i+1]='C';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='C' && f[i+1]=='A'){
            s[i]='B';
            s[i+1]='D';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='C' && f[i+1]=='B'){
            s[i]='A';
            s[i+1]='D';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='C' && f[i+1]=='D'){
            s[i]='A';
            s[i+1]='B';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='D' && f[i+1]=='A'){
            s[i]='B';
            s[i+1]='C';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='D' && f[i+1]=='B'){
            s[i]='A';
            s[i+1]='C';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }else if(f[i]=='D' && f[i+1]=='C'){
            s[i]='A';
            s[i+1]='B';
            if(i!=0 && s[i]==s[i-1]){
                t=s[i];
                s[i]=s[i+1];
                s[i+1]=t;
            }
        }
    }
    printf("%s",s);
}
