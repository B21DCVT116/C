#include <bits/stdc++.h>
using namespace std;
string s;
int danhdau[100];
int isFinal, dem;
void input(){
  cin>>s;
  dem=0;
  for (int i = 0; i < s.size(); i++)
  {
    if(s[i]=='?') {
       danhdau[dem]=0;
      dem++;
    }
  }
}
void sinh(){
  int i = dem-1;
  while(i>=0 && danhdau[i] == 1){
    danhdau[i]=0;
    i--;
  }
  if(i==-1){
    isFinal=0;
  }
  else{
    danhdau[i]=1;
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    input();
    isFinal = 1;
    while (isFinal == 1)
    {
      int j=0;  
      for (int i = 0; i < s.size(); i++)
      {
        if(s[i]=='?'){
          cout<<danhdau[j];
          j++;
        }
        else{
          cout<<s[i];
        }
      }
      cout<<endl;
      sinh();
    }
  }
}