#include<iostream>

#include<math.h>
using namespace std;

main()

{
      long int a,b,d,g,x,e,f,sum;
      long int c[100000];
  cin>>a;
  for(b=0;b<a;b++)
  {
                  cin>>c[b];
      }

      for(b=0;b<a;b++)
      {
                      sum=0;
                      e=0;
                      f=1;
                      x=c[b];
                      g=pow(5,f);
                      while(x/g>0)
                      {
                                sum=sum+x/g;

                                f++;
                                g=pow(5,f);
                                          }

                     cout<<sum<<endl;


                      }

}