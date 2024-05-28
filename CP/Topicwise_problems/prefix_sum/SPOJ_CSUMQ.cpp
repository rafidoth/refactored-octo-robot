
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007



int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif
  	int n,q;
	cin >> n ;
	vector<lli> arr(n), pf(n);
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}

	cin >> q;
	pf[0] = arr[0];
	for(int i =1;i<n;i++){
		pf[i] = pf[i-1] + arr[i]; 
	}
	// for(int x:arr) cout << x << " ";
	// cout << endl;
	// for(int x:pf) cout << x << " ";
	// cout << endl;
	
	for(int i =0;i<q;i++){
		int low,hi;
		cin >> low >> hi;
		if(low==0){
			cout << pf[hi]<<endl;
		}else{
			cout << pf[hi] - pf[low-1]<<endl;
		}
	}
}
