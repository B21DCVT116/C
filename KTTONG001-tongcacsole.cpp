#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        ll a, b;
        cin >>a >>b;
        ll sum = 0;
        if(a % 2 == 0 && b % 2 == 0){
            int k = (b - a)/2;
            sum = k*(b + a)/2;
        }
        if(a % 2 == 0 && b % 2 != 0){
            int k = (b - a + 1)/2;
            sum = k*(b + a + 1)/2;
        }
        if(a % 2 != 0 && b % 2 != 0){
            int k = (b - a + 2)/2;
            sum = k*(b + a )/2;
        }
        if(a % 2 != 0 && b % 2 == 0){
            int k = (b - a + 1)/2;
            sum = k*(b + a - 1)/2;
        }
        cout <<sum <<endl;
    }

    return 0;
}