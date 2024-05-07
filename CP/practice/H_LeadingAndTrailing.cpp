#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


long long binexp(int a, int b ,int m){
    if (b == 0){
        return 1;
    }
    long long res = binexp(a, b / 2,m);
    if (b % 2==1)
        return ((res%m)*(res%m)*(a%m))%m;
    else
        return ((res%m)*(res%m))%m; 
}

void solve(){
    int n,k;
    cin >> n >> k;
    double dv = (double)n/1000;
    int res = (int)pow(dv,k);
    while(res>1000){
        res/=10;
    }
    cout << res<<"...";
    cout << binexp(n,k,1000)<<endl;
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

