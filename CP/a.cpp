
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void solve(){
    int n ;
    cin >> n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    /* for(int x:v) cout << x<< " "; */
    /* cout << "\n"; */
    int med = ceil((float)n/2);
    int med_value = v[med-1];
    int count = 1;
    for(int i = med;i<n;i++){
        if(v[i]==med_value){
            count++;
        }else{
            break;
        }
    }
    cout << count;
    cout << "\n";

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
