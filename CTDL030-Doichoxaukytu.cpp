#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    int k;
    cin >> k >> s;
    int n = s.size();
    for (int i = 0; i <= n - 1; i++)
    {
      int max = i;
      for (int j = i + 1; j <= n - 1 && k > 0; j++)
      {
        if (s[j] > s[max])
          max = j;
      }
      if (s[max] > s[i] && k > 0)
      {
        swap(s[i], s[max]);
        k--;
      }
    }
    cout << s << endl;
  }
}