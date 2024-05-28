
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for(int i =0;i<n;i++){
		cin >> arr[i];
		arr[i]--;
	}
	
	for(int i =0;i<n;i++){
		if(arr[arr[i]] == i){
			cout << 2 << endl;
			return;
		}
	}

	cout << 3 << endl;

	
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
