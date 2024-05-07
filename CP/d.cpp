
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



bool rec(int n, int m){
    if(n==m) return true;
    if(n%3==0){
        if(rec(2*(n/3),m)){
            return true;
        }else{
            return rec(n/3,m);
        }
        
    }else{
        return false;
    }
}

void solve(){
    int n ,m;
    cin >> n >> m;
    if(rec(n,m)) cout << "YES"<<"\n";
    else cout << "NO" << "\n";
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

