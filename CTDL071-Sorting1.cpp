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
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    bubbleSort(a,n);
    for (int i = n-1; i > n/2; i--)
    {
      cout<<a[i]<<" "<<a[n-i-1]<<" ";
    }
    if(n%2==0) cout<< a[n/2] <<" "<< a[n/2-1];
    else cout<< a[n/2];
    cout<<endl;
  }
}