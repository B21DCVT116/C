// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int t;
//   cin >> t;
//   while (t--)
//   {
//     string s;
//     cin >> s;
//     for (int i = 0; i < s.size(); i++)
//     {
//       if (i == 0)
//         cout << s[i];
//       else
//       {
//         if (s[i] != s[i - 1])
//           cout << '1';
//         else
//           cout << '0';
//       }
//     }
//     cout << endl;
//   }
// }
#include <bits/stdc++.h>
using namespace std;

string grayToBinary(string gray)
{
  // storing length of gray in n
  int n = gray.size();

  // starting with an empty string, that will be our answer.
  string binary = "";

  // adding MSB of gray to answer as it is.
  binary += gray[0];

  // iterating till the length of gray.
  for (int i = 1; i < n; i++)
  {

    // If the digit is 0, copying the previous digit to answer
    if (gray[i] == '0')
      binary += binary[i - 1];

    /*
       If the digit is 1, then we have to check if previous digit 0 or 1,
       if the previous digit is 1, then 0 because 1 ⊕ 0 = 0
       else 1 because 1 ⊕ 1 = 0
    */
    else
    {
      if (binary[i - 1] == '0')
        binary += '1';
      else
        binary += '0';
    }
  }
  return binary;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string gray;
    cin >> gray;
    cout << grayToBinary(gray) << endl;
  }
}