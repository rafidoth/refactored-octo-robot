
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
	int n,k;
	cin >> n >> k;
	vector<int> arr(n);
	lli prod = 1;
	for(int i =0;i<n;i++){
		cin >> arr[i];
		prod*= arr[i];
	}
	if(2023%prod!=0){
		cout << "NO"<<endl;
		return;
	}
	cout << "YES"<<endl;
	lli res = 2023/prod;
	cout << res << " ";
	for(int i = 0;i<k-1;i++){
		cout << 1<< " ";
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
    answer();
  }
}
