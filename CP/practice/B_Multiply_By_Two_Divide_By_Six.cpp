#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int n;
    cin >> n;
    if(n==1){
        cout << 0 << "\n";
        return;
    }
    if(n%3!=0 ){
        cout << -1 << endl;
        return ;
    }else{
        int x = n;
        int twos =0;
        int threes = 0;
        while(x%2==0){
            twos++;
            x/=2;
        }

        while(x%3==0){
            threes++;
            x/=3;
        }
        if(x>1){
            cout << -1 << "\n";
            return;
        }

        if(twos>threes){
            cout << -1 << "\n";
            return;
        }
        
        cout << ((threes-twos) *2 ) + twos << "\n";


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

