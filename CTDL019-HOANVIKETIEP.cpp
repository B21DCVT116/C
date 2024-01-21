// #include <bits/stdc++.h>
// using namespace std;
// int a[100];
// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++){
//       cin>>a[i];
//     }
//     int j=n-1;
//     while (j>=1 && a[j]>a[j+1]){
//       j--;
//     }
//     if(j==0){
//       for (int i = n; i >= 1; i--){
//         cout<<a[i]<<" ";
//       }
//     }
//     else{
//       int k=n;
//       while(a[j]>a[k]) k--;
//       swap(a[j],a[k]);
//       reverse(a+j+1,a+k+1);
//       for (int i = 1; i <= n; i++){
//         cout<<a[i]<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }
#include <bits/stdc++.h>
using namespace std;
int a[100];
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++){
      cin>>a[i];
    }
    next_permutation(a , a + n);
    for (int i = 0; i < n; i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
  }
  
}