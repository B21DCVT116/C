#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int cnt=0;
    int a[10]={1000,500,200,100,50,20,10,5,2,1};
    for (int i = 0; i<10; i++){
      cnt=cnt+n/a[i];
      n%=a[i];
    }
    cout<<cnt<<endl;
  }
}