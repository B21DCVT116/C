#include <bits/stdc++.h>
using namespace std;

#define mod 100000007


// hàm sắp xếp nổi bọt (bubble sort)
void BubbleSort(int a[],int n){
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-i-1; j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(a[j],a[j+1]);
      }
    }
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    BubbleSort(a,n);
    long long max=0;
    for (int i = 0; i < n; i++)
    {
      max=max+(a[i]*i);
      max=max % mod;
    }
    cout<<max<<endl;
  }
}