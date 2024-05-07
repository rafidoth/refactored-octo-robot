#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int n, k;
    cin >> n >> k;
    k--;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }
    int my_cow = v[k];
    for(int i=0;i<k;i++){
        if(v[i]>my_cow){
            v[k] = v[i];
            v[i] = my_cow;
            k = i;
            break;
        }
    }
    int pre = 0;
    if(k!=0){
        pre = 1;
    }
    
    int post = 0;
    for(int i =k+1;i<n;i++){
        if(v[i]<v[k]){
            post++;
        }else{
            break;
        }
    }
    cout << pre+post<< endl;
 
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

