#include <bits/stdc++.h>
using namespace std;

long long binToDec(string s){
  int dec=0;
  reverse(s.begin(),s.end());
  for (int i = 0; i < s.size(); i++)
  {
    dec+=(s[i]-'0')*pow(2,i);
  }
  return dec;
}

int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s1,s2;
    cin>>s1>>s2;
    cout<<binToDec(s1)*binToDec(s2)<<endl;
  }
}