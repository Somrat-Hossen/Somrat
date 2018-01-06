#include<bits/stdc++.h>

using namespace std;

int main()
{
    int cnt,coun=1;
    char str[100000];
    gets(str);

    int len=strlen(str);

    if(str[0]=='{' && str[1]=='}')
    {
        cout<<0<<endl;return 0;
    }
    for(int i=4;i<len-1;i+=3)
    {
    cnt=0;
    for(int j=1;j<i;j+=3)
    {
      if(str[i]==str[j])
      {
      cnt++;
      break;
      }
    }
    if(cnt==0)
    {
      coun++;
    }
    }
    cout<<coun<<endl;

    return 0;
}
