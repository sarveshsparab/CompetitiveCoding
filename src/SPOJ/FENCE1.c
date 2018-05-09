#include<stdio.h>
int main()
{
      float l;
      scanf("%f",&l);
      while(l!=0)
      {
           if(l==0)
           printf("0");
           else
           {
           l=l/3.14159;
           printf("%.2f\n",3.14159*l*l/2);
           }
           scanf("%f",&l);
      }
      return 0;
}


