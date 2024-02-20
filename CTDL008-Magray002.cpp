#include <bits/stdc++.h>
using namespace std;

string cvt(string s){
    string ans ="";
    ans += s[0];
    for(int i = 1; i < s.size(); ++i){
        ans += (s[i] != s[i-1]) ? '1': '0';
    }
    return ans;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    cout<<cvt(s)<<endl;
  }
}