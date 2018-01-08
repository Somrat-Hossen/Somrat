#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
using namespace std;

int arr[1000];
int dp[1000];
set<char>st;
vector<int>vec;
stack<int>stk;

int check(int n)
{

}

int main()
{

  int n,i,x,y,z,j,len,cnt;
  string str;
  cin>>len;
  cin>>str;

  for(i=0;i<len;i++)
   {
      char ch=tolower(str[i]);
      st.insert(ch);

    }
  if(st.size()==26)
      cout<<"YES"<<endl;
  else
       cout<<"NO"<<endl;

    return 0;
}

