#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  cin.ignore();
  while(t--){
    string s;
    string S1 = "";
    getline(cin,s);
    for (char x:s)
    {
      if(x!=' '){
        S1.push_back(x);
      }
      else{
        reverse(S1.begin(),S1.end());
        cout<<S1<<" ";
        S1="";
      }
    }
    reverse(S1.begin(),S1.end());
    cout<<S1<<endl;
  }
}