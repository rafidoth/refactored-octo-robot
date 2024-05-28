
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
	cin >> n >> q;
	vector<int> arr(n), px(n);
	for(int i =0;i<n;i++) cin >> arr[i];
	
	px[0] = arr[0];
	for(int i =1;i<n;i++){
		px[i] = px[i-1]^arr[i];
	}
	
	for(int i =0;i<q;i++){
		int a,b;
		cin >> a >> b;
		a--;
		b--;
		if(a==0){
			cout << px[b]<<endl;
		}else{
			cout << (px[b] ^ px[a-1]) <<endl;
		}
	}

}
