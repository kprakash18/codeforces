
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


// other way

void solve() {
    ll n; cin>>n;
    string s; cin>>s;

    bool threeConsecutiveDots = false;
    int totalCountOfDots = 0 ;

    for(ll i = 0; i<n; i++){
        // check if we find 3 continuous dots
        if(s[i] == '.' && i+1<n && s[i+1] == '.' && i+2 < n  && s[i+2] == '.'){
            threeConsecutiveDots = true;
            break;
        }

        // count empty cells
        if(s[i] == '.') totalCountOfDots++;
    }

    // if three dots found answer = 2 else the answer is count of dots
    if(threeConsecutiveDots){
        cout<<2<<"\n";
    }else{
        cout<<totalCountOfDots<<"\n";
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
