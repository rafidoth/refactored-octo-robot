#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int n; 
    cin >> n ;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }
    if(n==1){
        cout << 1 << endl;
        return;
    }
    sort(v.begin(),v.end());
    vector<int> pref(n),suff(n);
    pref[0] = v[0];
    for(int i =1;i<n;i++){
        pref[i] = pref[i-1]+ v[i];
    }
    suff[n-1] = v[n-1];
    for(int i =n-2;i>=0;i--){
        suff[i] = suff[i+1] + v[i];
    }

    int count = 0;
    bool flag = false;
    for(int i =n-1;i>=1;i--){
        if(suff[i]>pref[i-1]){
            count++;
            break;
        }else{
            count++;
        }
        if(i==1){
            flag = true;
        }
    }

    if(flag ) count++;
    // for(int x: pref) cout << x << " ";
    // cout << "\n";
    // for(int x : suff ) cout << x << " ";
    // cout << "\n";
    cout << count << "\n";
}




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    // cin >> t;
    t=1;
    while(t--){
        solve();
    }
}

