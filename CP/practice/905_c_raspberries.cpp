#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007
 
 
 
void solve(int t){
    // cout << "start----"<<t<<"\n";
    int n,k;
    cin >> n >> k;
    vector<int> v(n);

    int even = 0;
    
 
    for(int i =0;i<n;i++){
        cin >> v[i];
    }
    
    for(int  i =0;i<n;i++){
        if(v[i]%k==0){
            cout << 0 << "\n";
            return;
        }
        if(v[i]%2==0) even++;
    }

    int mo = INT_MAX;
    for(int i =0;i<n;i++){
        int x = v[i];
        while(x%k!=0 ){
            x++;
        }
        mo = min(mo, x-v[i]);
    }
    
    if(k==4){
        if(even >=2) mo = min(mo,0);
        else if(even ==1) mo = min (mo,1);
        else mo = min (mo,2);
    }
    cout << mo << "\n";
   
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
    int i = 1;
    while(t--){
        solve(i);
        i++;
    }
}
 
