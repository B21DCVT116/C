#include <bits/stdc++.h>
using namespace std;

string s;
int k;

void doicho (string s){
  int i=0;
  while(k--){
    int max = i;
    for(int j = i + 1; j < s.size(); j++){
      if(s[j] > s[max]) max=j;
    }
    swap(s[max],s[i]);
    i++;
  }
  cout<<s<<endl;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    cin>>k;
    cin>>s;
    doicho(s);
  }
}