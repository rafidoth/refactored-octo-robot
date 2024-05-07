#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int a,b;
    int kx, ky;
    int qx,qy;
    cin >> a >> b >> kx >> ky>> qx>> qy;
    vector<pair<int,int>> origin_coords,k_coords, q_coords;
    origin_coords.push_back(make_pair(-a,-b));
    origin_coords.push_back(make_pair(-a,b));
    origin_coords.push_back(make_pair(a,-b));
    origin_coords.push_back(make_pair(a,b));
    origin_coords.push_back(make_pair(b,-a));
    origin_coords.push_back(make_pair(b,a));
    origin_coords.push_back(make_pair(-b,a));
    origin_coords.push_back(make_pair(-b,-a));
    

    set<pair<int,int>> uniques;
    for(int i=0;i<8;i++){
       k_coords.push_back(make_pair(origin_coords[i].first+kx, origin_coords[i].second+ky));
       q_coords.push_back(make_pair(origin_coords[i].first+qx, origin_coords[i].second+qy));
    }
    for(auto x:k_coords){
        for(auto y: q_coords){
            if(x==y ){
                uniques.insert(x);
            }
        }
    }
    cout << uniques.size() << "\n";
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

