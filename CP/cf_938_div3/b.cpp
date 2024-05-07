#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    // cout << "start" <<endl;
    int n,c,d;
    cin >> n >> c>> d ;
    lli sz = n*n;
    vector<int> arr(sz);
    for(int i =0;i<sz;i++){
        cin >> arr[i];
    }
    map<lli,int> umap;
    for(int i =0;i<sz;i++){
        umap[arr[i]]++;
    }

    int min = *min_element(arr.begin(),arr.end());

    int x = min;
    vector<int> first_row(n);
    for(int i=0;i<n;i++){
        first_row[i] = x;
        if(umap[x]>0){
            umap[x]--;
        }else{
            cout << "NO"<<endl;
            return;
        }
        x+=d;
    }

    // cout << "\n";
    for(int k : first_row){
        int zz  = k;
        for(int i =0;i<n-1;i++){
            zz+=c;
            if(umap[zz]>0){
                umap[zz]--;
            }else{
                cout << "NO" << endl;
                return;
            }
        }
    }


    cout << "YES" << endl;
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

