#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    lli a,b,m;
    cin >> a >> b >> m  ;
    cout << (m/a) +1 + (m/b)+1<<endl;
}




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}

