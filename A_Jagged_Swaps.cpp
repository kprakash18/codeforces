#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;
using namespace std;

void solve() {
    ll n; 
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    if(v[0] == 1) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}