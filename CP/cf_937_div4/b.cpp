
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int n; cin >> n;
    int row = 2*n;
    int col = 2*n;
 
    bool f2 = true;
    for(int i=0;i<row;i++){
        if(f2){
            int c = 0;
            bool f = true;
            while(c<col){
                if(f) cout << "##";
                else cout << "..";
                f = !f;
                c+=2;
            }
        }else{
            int c = 0;
            bool f = true;
            while(c<col){
                if(f) cout << "..";
                else cout << "##";
                f = !f;
                c+=2;
            }
        }
        if(i%2==1){
            f2 = !f2;
        }
        cout << "\n";
    }

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
