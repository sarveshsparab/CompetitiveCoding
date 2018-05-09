#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

int CTest(char *,int );
int JavaTest(char *,int );
void JavaConvert(char *,int );
void CConvert(char *,int );

char ConvertedString[MAX];

int main(void){

    char Identifier[MAX];
    int i,Length;
    int JavaResult,CResult,Flag;

    while(scanf("%s",Identifier)!=EOF){

        Length=strlen(Identifier);
        JavaResult=JavaTest(Identifier,Length);
        CResult=CTest(Identifier,Length);

         if(JavaResult&&CResult)
              printf("%s\n",Identifier);

         else{

          if(!JavaResult&&!CResult)
            printf("Error!\n");

             else {

                 if(JavaResult){

                    CConvert(Identifier,Length);
                    printf("%s\n",ConvertedString);

                 }

                else{

                    JavaConvert(Identifier,Length);
                    printf("%s\n",ConvertedString);

                }

             }

         }

    }

    return 0;

}

int JavaTest(char *Identifier,int Length){

    if((Identifier[0]<'a'||Identifier[0]=='_'))
        return 0;

    int i;
    for(i=1;i<Length;i++){

        if(Identifier[i]=='_')
             return 0;

        if((Identifier[i]>='a'&&Identifier[i]<='z')||(Identifier[i]>='A'&&Identifier[i]<='Z'))
             continue;

        else return 0;

    }

    return 1;

}

int CTest(char *Identifier,int Length){

    int i;
    for(i=0;i<Length;i++){

        if(i!=Length-1&&(Identifier[i]=='_'&&Identifier[i+1]=='_'))
               return 0;

    }

    for(i=0;i<Length;i++)
         if(Identifier[i]!='_')break;

    if(i==Length)return 0;

    if(Identifier[0]=='_'||Identifier[Length-1]=='_')
        return 0;

    for(i=0;i<Length;i++){

        if((Identifier[i]=='_')||(Identifier[i]>='a'&&Identifier[i]<='z'))
            continue;

        else return 0;

    }

    return 1;

}

void CConvert(char *Identifier,int Length){

    //jaVa

    int i=0,j=0;
    for(i=0;i<Length;i++){

        if(Identifier[i]>='A'&&Identifier[i]<='Z'){

            ConvertedString[j++]='_';
            ConvertedString[j++]=Identifier[i]+32;

        }

        else
         ConvertedString[j++]=Identifier[i];

    }

    ConvertedString[j++]='\0';

}

void JavaConvert(char *Identifier,int Length){

    int i=0,j=0;
    for(i=0;i<Length;i++){

        if(Identifier[i]=='_'){

            ConvertedString[j++]=Identifier[i+1]-32;
            i++;

        }

        else ConvertedString[j++]=Identifier[i];

    }
    ConvertedString[j++]='\0';

}
