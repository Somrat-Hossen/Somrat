#include <bits/stdc++.h>
#include<iomanip>
#define PI acos(-1)
using namespace std;

int arr[1000];
int dp[1000];
vector<int>vec;
stack<int>stk;

int check(int n)
{

}
int main()
{
    int n,i,sum=0,m,tmp,cnt=0;
    for(i=0;i<5;i++)
    {
        cin>>tmp;
        sum+=tmp;
    }

    if(sum>0 and sum%5==0)
    {
    cout<<sum/5<<endl;
    }
    else
    {
    cout<<"-1"<<endl;
    }

    return 0;
}

