#include <bits/stdc++.h>
using namespace std;
string graytobinary(string s){
  string ans = "";
  ans+=s[0];
  for (int i = 1; i < s.size(); i++)
  {
    ans+= (s[i] == '0') ? ans[i-1] : (ans[i-1] == '0') ? '1': '0' ;
  }
  return ans;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    cout<<graytobinary(s)<<endl;
  }
}