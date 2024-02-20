#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
  return n ^ (n / 2);
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    cout << solve(n) << '\n';
  }
}