
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int xorInRange(int n){
    if(n%4==0) return n ;
    else if(n%4 == 1) return 1;
    else if(n%4== 2) return n+1;
    else if(n%4== 3 ) return 0;
    else return -1;
}

vector<int> decode(vector<int>& encoded) {
    int n = encoded.size() + 1;
    int xor_without_last_one = 0;
    for(int i =0;i<n-2;i+=2) xor_without_last_one ^= encoded[i];
    int last_one = xorInRange(n) ^ xor_without_last_one;

    vector<int> res;
    res.push_back(last_one);

    for(int i = n-2;i>=0;i--){
        last_one ^= encoded[i] ;
        res.push_back(last_one);
    }

    /* cout << "\n"; */

    reverse(res.begin(),res.end());
    cout << res.size()<<"\n";
    return res;
}



int main(){
  	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n ;
    cin >> n;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        cin >> v[i];
    }
    vector<int> res = decode(v);
    for(int x: res){
        cout << x<< " ";
    }
    cout << "\n";
}
