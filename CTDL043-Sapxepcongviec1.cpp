#include <bits/stdc++.h>
using namespace std;

struct dataStruct {
  int fi,se;
};

dataStruct h[1005];

bool cmp (dataStruct a, dataStruct b){
  return a.se < b.se;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
      cin>>h[i].fi;
    }
    for (int i = 0; i < n; i++)
    {
      cin>>h[i].se;
    }
    sort(h,h+n,cmp);
    int dem=1,i=0;
    for (int j = 1; j< n; j++)
    {
      if(h[j].fi>=h[i].se){
        dem++;
        i=j;
      }
    }
    cout<<dem<<endl;
  }
}