
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007




void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int ones = 0;
    int zeros = 0;
    for(int i =0;i<n;i++){
        if(s[i]=='0') zeros++;
        else ones++;
    }
    if(ones==zeros) cout << "0"<<"\n";
    else {
        for(char x: s){
            if(x=='0'){
                if(ones !=0) ones--;
                else{
                    cout << zeros << "\n";
                    return;
                }
            }else if (x=='1'){  
                if(zeros != 0) zeros--;
                else{
                    cout << ones<< "\n";
                    return;
                }
            }
            
        }
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

