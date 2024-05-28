
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
	int n,q;
	cin >> n >> q;
	vector<lli> arr(n), pf(n);
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	pf[0] = arr[0];
	for(int i = 1;i<n;i++){
		pf[i] = pf[i-1] + arr[i];
	}


	for(int i = 0;i<q;i++){
		lli a,b,k;
		cin >> a >> b>> k;
		a--;
		b--;
		lli totalsum = pf[n-1];
		lli rangesum = -53;
		if(a==0){
			rangesum = pf[b];
		}else{
			rangesum = pf[b]- pf[a-1];
		}
		lli new_sum = ((b-a)+1)*k;
		totalsum -= rangesum;
		totalsum+=new_sum;
		if(totalsum%2==1){
			cout << "YES"<<endl;
		}else{
			cout << "NO"<<endl;
		}
	}
}




int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    answer();
  }
}
