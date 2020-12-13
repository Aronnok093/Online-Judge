#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M,T,l=0;
    cin>>N>>M>>T;
    int a[M],b[M],p[M];
   for(int i=0; i<M; i++)
    {
      cin>>a[i];
      cin>>b[i];
      p[i]=b[i]-a[i];
   }
     l=N-(a[0]);
     if(l<=0)
     {
         cout<<"No";
         return 0;
     }
     l=l+p[0];
     if(l>=N)
        l=N;
   //for(int i=0; i<M; i++)
    //{
      //s=s+p[i];
   //}

    for(int i=1; i<M; i++)
    {  if(l>=N)
      {   l=N;
          //continue;
      }
      l=l-(a[i]-b[i-1]);
       if(l<=0)
     {
         cout<<"No";
         return 0;
     }
     if(l>=N)
     {  l=N;
       continue;}
       else
         l=l+p[i];
    }
    l=l-(T-b[M-1]);
   // cout<<l<<endl;
    if(l<=0)
        cout<<"No";
    else
      cout<<"Yes";
   return 0;
}
