
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define M 1000000007


lli kadane(vector<int> v){
  lli msum =0;
  lli sum = 0;
  for(int i:v){
      sum += i;
      msum = max(msum, sum);
      sum = max(sum,(lli)0);
  }

  return msum;
}

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

lli mod(lli a, lli m){
    a %= m;
    if(a<0) a+= m;
    return a;
}

lli add(lli a, lli b, lli m) {
    a+=b;
    return a >=m ? a - m : a; // ensuring the sum comes in range of 1 to m-1
}

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    lli sum = 0;
    for(int i =0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    lli msum = kadane(v);
    lli kth = binpow(2,k-1,M);
    /* lli x = (((msum%M)*((kth-1)%M))%M); */
    lli x = (mod(((mod(msum,M))*(mod((kth-1),M))),M));
    lli y = (mod(((mod(msum,M))*(mod(kth,M))),M));
    /* lli y = (((msum%M)*((kth)%M))%M); */
    /* cout << ((((sum%M) + (msum*(kth-1)%M) + (msum*kth%M))%M)%M + M)%M << "\n"; */
    cout << mod((mod(sum,M) + mod(x,M) + mod(y,M)),M)<< "\n";
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
