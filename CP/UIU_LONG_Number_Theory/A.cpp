
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

// bool check_prime(int x){
// 	for(int i =2;i<x;i++){
// 		if(x%i==0){
// 			return false;
// 		}
// 	}
// 	return true;
// }
// 
// 
// 



int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif
	
  	int t;
  	cin >> t;
	vector<int> primes;
	vector<int> not_prime(163900,0);
	for(int j = 2;j<=163841;j++){
		if(not_prime[j]!=1){
			for(int i = j*2;i<=163841;i+=j){
				not_prime[i] = 1;
			}
		}
	}
	for(int i=2;i<163900;i++){
		if(!not_prime[i]) primes.push_back(i);
	}
	
  	for (int i = 0; i < t; i++) {
    		int n;
			cin >> n;
			cout << primes[n-1]<<endl;
  	}	
}
