
#include <iostream>
#include <string>
using ll = long long ;
using namespace std;

void solve() {
    ll n; cin>>n;
    string s; cin>>s;

    bool threeDots = false;
    for(ll i = 2; i<n; i++){
        if(s[i-2] == '.' && s[i-1] == '.' && s[i] == '.'){
            threeDots = true;
            break;
        }
    }
    if(threeDots){
        cout<<2<<"\n";
    }else{

        ll count = 0 ;
        for(ll i = 0 ; i<n; i++){
            if(s[i] == '.') count++;
        }
    
        cout<<count<<"\n";
    }

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
