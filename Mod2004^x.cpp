#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
#define VAL 29
using namespace std;

int calc(int x, int p){
    int i,t;

    x = x % VAL;
    p = p % (VAL - 1);

    if (p == 0) return 0;
    else{
         t = 1;
         for (i = 0; i < p; i++)
           t = (t * x) % VAL;

         t--;
        while (t % (x - 1) != 0) t += VAL;
        i = t / (x - 1);
        return i;
    }
}

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n, v;
        cin >> n;
        v = calc(2, 2 * n + 1);
        v = (v * calc(3, n + 1)) % VAL;
        v = (v * calc(167, n + 1)) % VAL;
        cout << v << endl;

    }
    return 0;
}