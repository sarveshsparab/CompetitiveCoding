#include <stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  int n,k;
  scanf("%d%d",&n,&k);
  int count_n=0,count_z=0,count_p=0,i;
  long long sum=0,min=9999999,temp;
  int a[n+9];
  for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   temp=a[i]>0?a[i]:-1*a[i];
   if(temp<min)
    min=temp;
   if(a[i]<0)
    count_n++;
  }
  if(k<=count_n)
  {
   int j=0;
   for(i=0;i<n;i++)
    if(a[i]<0 && j<k)
    {
     a[i]=-a[i];
     j++;
    }
   for(i=0;i<n;i++)
    sum+=a[i];
   printf("%lld\n",sum);
  }
  else
  {
   for(i=0;i<count_n;i++)
    a[i]=-a[i];
   for(i=0;i<n;i++){
    sum+=a[i];
   }
   if((k-count_n)%2!=0)
    sum+=-(2*min);
   printf("%lld\n",sum);
  }
 }
 return 0;
}