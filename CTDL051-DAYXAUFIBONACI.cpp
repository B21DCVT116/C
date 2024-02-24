#include <bits/stdc++.h>
using namespace std;

string fibo(int n){
  string g1,g2,gn;
  g1='A';
  g2='B';
  for (int i = 3; i <= n; i++)
  {
    gn=g1+g2;
    g1=g2;
    g2=gn;
  }
  return gn;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,i;
    cin>>n>>i;
    string s;
    s=fibo(n);
    cout<<s[i-1]<<endl;
  }
}