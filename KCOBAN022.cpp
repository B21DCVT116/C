#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, m;
        cin >> x >> y >> m;
        if((m/x) == 0) cout << m/x << endl;
        else{
            x=m/x;//x là số vỏ hộp (đổi)
            int n=x;//biến lưu số hộp cuối cùng                
            while (x>=y){
                n+= x/y;
                x= x/y + x%y;
            }
            cout << n << endl;
        }
    }
    return 0;
}



