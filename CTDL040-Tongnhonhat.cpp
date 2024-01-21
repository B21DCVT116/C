#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n){
  for (int i = 0; i < n-1; i++){
    for (int j = 0; j < n-i-1; j++){
      if (a[j] > a[j + 1]){
        swap(a[j],a[j+1]);
      }
    }
  }
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){
      cin>>a[i];
    }
    bubbleSort(a,n);
    int x=0,y=0;
    for (int i = 0; i < n; i++){
      if(i%2==0) x=x*10+a[i];
      else y=y*10+a[i];
    }
    cout<<x+y<<endl;
  }
}