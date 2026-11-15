#include <iostream>
using ll = long long ;
using namespace std;

void solve(){
    ll n; cin>>n;
    
    (n%3 == 0) ? cout<<"Second"<<"\n" : cout<<"First"<<"\n";
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}

