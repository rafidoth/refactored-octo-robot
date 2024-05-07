#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }
    if(n%2==0){
        cout << 2 <<endl;
        cout << 1 << " " << v.size()<<endl;
        cout << 1 << " " << v.size()<<endl;
    }else{
        cout << 4<<endl;
        cout << 1 << " "<< v.size()-1<<"\n";
        cout << 1 << " "<< v.size()-1<<"\n";
        cout << 2 << " "<< v.size()<<"\n" ;
        cout << 2 << " "<< v.size()<<"\n" ;
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

