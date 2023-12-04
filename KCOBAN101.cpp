#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c[10];
        cin >> a >> b;
        for(int i=a; i<=b; i++){
            int n=i;
            while (n>0)
            {
                c[n%10]++;
                n/=10;
            }
        }
        cout << c[10] <<endl;
    }    
}