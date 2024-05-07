#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int n,k;
    cin >> n >> k ;
    vector<int> v(n);
    for(int i =0;i<n;i++) cin >> v[i];
    for(int i =0;i<n;i++) cout <<  v[i];
    
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
