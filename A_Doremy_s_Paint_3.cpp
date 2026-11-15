#include <iostream>
#include <vector>
#include <unordered_map>
using ll = long long ;
using namespace std;
void solve() {
    int n; cin >> n;

    unordered_map<ll, ll> freq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    if (freq.size() == 1) {
        cout << "YES\n";
    }
    else if (freq.size() > 2) {
        cout << "NO\n";
    }
    else { // freq.size == 2
        auto it = freq.begin();

        int f1 = it->second;
        int f2 = next(it)->second;

        if (abs(f1 - f2) <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}