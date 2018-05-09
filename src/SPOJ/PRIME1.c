#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,j,k,l,flag;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&i,&j);
        for(k=i;k<=j;k++)
        {
            flag=1;
            for(l=2;l<=sqrt(k) && flag==1;l++)
            {
                if(k%l==0)
                {
                    flag=0;
                }
            }
            if(flag==1 && k!=1)
            {
                printf("%d\n",k);
            }
        }
        printf("\n");
    }
}
