
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007
 
 
 
void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }
 
 
    int a = (k/2) + (k%2);
    int b = (k/2);
    // cout << a << " " << b << endl;
    for(int i = n-1;i>=0;i--){
        if(b<=0) break;
        if(v[i]<=b){
            b-= v[i];
            v[i]=0;
        }else{
            v[i]-=b;
            b=0;
        }
    }
    for(int i=0;i<n;i++){
        if(a<=0) break; 
        if(v[i]<=a){
            a-= v[i];
            v[i]=0;
        }else{
            v[i]-=a;
            a=0;
        }
    }
    int cnt = 0;
    for(int m:v) {
        if(m==0) cnt++;
    }
    cout << cnt;
    cout << endl;
 
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