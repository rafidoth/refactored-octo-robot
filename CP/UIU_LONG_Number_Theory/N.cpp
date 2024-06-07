
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

const int N = 5000;
vector<int> primes;
vector<bool> is_prime(N,true);

void sieve(){
    is_prime[0] = false;
    is_prime[1] = false;
    for(int i = 2;i*i<N;i++){
        if(is_prime[i]){
            for(int k = i*i; k<N;k+=i){
                is_prime[k] = false;
            }
        }
    }

    for(int i =2; i<N;i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
}


void answer(int tc) {
    cout << "Case " << tc+1 << ": ";
    string str;
    cin >> str;
    sieve();
    map<char,int> fq;
    for(char x: str){
        fq[x]++;
    }
    vector<char> ans;
    for(auto pair: fq){
        /* cout << pair.first << " " << pair.second << endl; */
        int cnt = count(primes.begin(),primes.end(), pair.second);
        if(cnt > 0 ){
            ans.push_back(pair.first);
        }
    }
    if((int)ans.size()==0) cout << "empty";
    else{
        for(char x: ans ) cout << x;
    }
    cout << endl;
}




int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    answer(i);
  }
}
