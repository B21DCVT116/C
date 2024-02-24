#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    stack<string>stk;
    for (int i = 0; i < s.size(); i++)
    {
      if(isalpha(s[i])){
        stk.push(string(1,s[i]));
      }
      else{
        string a = stk.top(); stk.pop();
        string b = stk.top(); stk.pop();
        string tmp = s[i]+b+a;
        stk.push(tmp);
      }
    }
    cout<<stk.top()<<endl;
  }
}