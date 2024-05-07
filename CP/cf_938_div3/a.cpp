#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int n,a,b;
    cin >> n>> a>> b;
    if(2*a <= b){
        cout << n*a << endl;
    }else{
        cout << (n/2)*b + (n%2)*a<<endl;
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

