#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    int d[300] = {0};
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
      d[s[i]]++;
      if (res < d[s[i]])
        res = d[s[i]];
    }
    if (res <= s.size() / 2 && s.size() % 2 == 0)
      cout << "1" << endl;
    else if (res <= s.size() / 2 + 1 && s.size() % 2 != 0)
      cout << "1" << endl;
    else
      cout << "-1" << endl;
  }
}