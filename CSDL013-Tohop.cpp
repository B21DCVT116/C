#include <bits/stdc++.h>
using namespace std;
int n,k,x[1000];
int ok;
void input(){
  for (int i = 1; i <= k; i++)
  {
    x[i]=i;
  }
}

void sinh(){
  int i = k;
  while(i>=1 && x[i] == n-k+i){
      i--;
  }
  if(i == 0){
    ok = 1; 
  }else{
    x[i]++;
    for(int j=i+1;j<=k;j++){
      x[j] = x[j-1] + 1;
    }
  }
} 

int main(){
  int t;
  cin>>t;
  while(t--){
    cin>>n>>k;
    input();
    ok = 0;
    while (ok == 0)
    {
      
      for(int i=1;i<=k;i++){
        cout<<x[i];
      }
      cout<<" ";
      sinh();
    }
    cout<<endl;
  }
}
