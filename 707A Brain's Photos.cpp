#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
int arr[10000];

using namespace std;

int check(int n)
{

}

int main()
{
     char ch;
   int n,i,sum=0,m,tmp,cnt=0,x,y,z,j;
   cin>>n>>m;

   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           cin>>ch;
           if(ch=='C' || ch=='M' || ch=='Y')
            cnt++;
       }
   }
   if(cnt)
   {
       cout<<"#Color"<<endl;
   }
   else
   {
       cout<<"#Black&White"<<endl;
   }

    return 0;
}
