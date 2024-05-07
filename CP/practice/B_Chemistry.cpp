#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007




void solve(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char,int> umap;
    for(char x : s){
        umap[x]++;
    }
    int count = 0;
    for(auto x:umap){
        if(x.second%2==1) count++;
    }
    
    if(k<count-1) cout << "NO" <<"\n";
    else cout << "YES"<<"\n";

}




int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
}

