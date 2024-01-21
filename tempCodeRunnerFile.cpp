#include <bits/stdc++.h>
using namespace std;
void gray(string s){
  int a[s.size()];
  a[0]=s[0]-'0';
  for (int i = s.size()-1; i >= 1; i--)
  {
    if(s[i]!=s[i-1]) a[i] = 1;
    else a[i] = 0;
  }
  for (int i = 0; i < s.size(); i++)
  {
    cout<<a[i];
  }
  cout<<endl;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    gray(s);
  }
}