#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
using namespace std;
typedef long long int ll;

int main()
{
 ll n,i,x,y,z,j,len,res=1,m;
 cin>>n>>m;

 if(n>=27)
      cout<<m;
 else
 {
     for(i=1;i<=n;i++)
     {
       res*=2;
     }
     cout<<m%res;
    //cout<<m%(1<<n);
 }
   return 0;
}
