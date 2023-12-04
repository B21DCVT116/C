#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int check=1;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int tmp=a[1]-a[0];
    for(int i=0;i<(n-1);i++){
    	if (a[i+1]-a[i]==tmp){
    		if(a[i]==a[i+1]){
    			check=0;
	        	break;	
			}
    	}
    	else{
    		check = 0;
    		break;
		}
	}
    
    if(check==1) cout<<"YES"<<endl;
    else cout<< "NO" <<endl;
}
