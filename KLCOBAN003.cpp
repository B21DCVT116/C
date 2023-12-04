#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long a,b,c1,c2;
        cin >> a >> b; 
        c1=sqrt(a);c2=sqrt(b);
        if (c1*c1!=a) c1++;
        cout << c2-c1+1 <<endl;;
    }
}
