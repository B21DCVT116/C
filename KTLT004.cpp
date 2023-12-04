#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k=1;
        double s=0,x,xk=1;
        cin >> n >> x;
        for(int i=1;i<=n;i++){
            xk*=x;
            k*=i;
            s+=xk/k;
        }
        cout << fixed <<setprecision(3)<< s <<" "<<endl;
    }
}
