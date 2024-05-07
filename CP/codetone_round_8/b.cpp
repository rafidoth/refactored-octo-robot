
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


int Mex2(vector<int>& v, int indx){
    int highest_possible = v.size()+1;
    int mex = 0;
    bool flag = false;
    for(int i =0;i<=highest_possible;i++){
        for(int j = 0;j<=indx;j++){
            if(v[j]== i){
                flag = true;
                break;
            }
        }
        if(flag){
            flag = false;
            continue;
        }else{
            mex = i;
            break;
        }
    }
    return mex;
}


bool alreadyExists(vector<int>& v, int target){
    int n = v.size();
    for(int i =0;i<n;i++){
        if(v[i]==target) return true;
    }
    return false;
}

void solve(){
    int n;
    cin >> n ;
    vector<int> a(n),p(n),freq(n+1);
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    int mex = 0;
    for(int i =0;i<n;i++){
        if(a[i]>0) p[i] = mex;
        else p[i] = mex-a[i];
        freq[p[i]] = 1;
        for(int k =0;k<n+1;k++){
            if(freq[k]== 0) {
                mex= k;
                break;
            }
        }
    }
    
    for(int x:p) cout << x<< " ";
    cout << "\n";
    
    
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
