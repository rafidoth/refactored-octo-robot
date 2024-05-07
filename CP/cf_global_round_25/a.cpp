#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n<=2){
        if(s=="00"|| s=="0"){
            cout << "YES"<<endl;
        }else{
            cout << "NO" <<endl;
        }
        return;
    }
    int ones = 0;
    for(char x: s){
        if(x=='1'){
            ones++;
        }
    }
    if(ones == 2){
        for(int i =0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='1'){
                cout << "NO"<<endl;
                return;
            }
        }
    }
    // cout << ones << endl;
    if(ones%2==0){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
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

