#include <bits/stdc++.h>
using namespace std;
int isFinal,a[100];
void khoitao(int n){
  for (int i = 1;i <= n; i++){
    a[i]=(n-i+1);
  }
}
void sinhhoanvi(int n){
  int i=n-1;
  while(i>=1 && a[i]<a[i+1]){
    --i;//neu so truoc lon hon so sau thi bo qua
  }
  if(i==0) isFinal=0;//in ra cau hinh cuoi
  else{
    int j=n;//tim thang nho hon a[i] nhung phai lon nhat
    while(a[i]<a[j]) j--;//neu lon hon thi bo qua
    swap(a[i],a[j]);
    reverse(a+i+1,a+n+1);
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    isFinal=1;
    khoitao(n);
    while(isFinal){
      for (int i = 1; i <= n; i++){
        cout<<a[i];
      }
      cout<<" ";
      sinhhoanvi(n);
    }
    cout<<endl;
  }
}