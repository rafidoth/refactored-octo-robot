#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
}




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    while(cin>>a){
        if(a==1){
            cout << 1 << endl;
            break;
        }
        int ans = 2;
        lli sum = 1;
        int k = 1;
        while(true){
            k = (k*(10%a))%a;
            sum += k;
            if(sum%a==0){
                break;
            }else{
                ans++;
            }
        }
        cout << ans << endl;
    }
}

