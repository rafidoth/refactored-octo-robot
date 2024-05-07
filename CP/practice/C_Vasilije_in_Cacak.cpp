#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    lli n,k,x;
    cin >> n >> k >> x;
    lli a = n*(n+1)/2;
    lli b = (n-k)*(n-k+1)/2;
    lli max_sum = a-b;
    lli min_sum = k*(k+1)/2;
    // cout << max_sum << " "<< min_sum<<"\n";
    if(x>=min_sum && x<=max_sum){
        cout << "YES"<<"\n";
    }else{
        cout << "NO"<<"\n";
    }

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

