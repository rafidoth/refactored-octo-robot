#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n,x;
	cin >> n >> x;
	vector<int> v(n);
	for(int &y : v) cin >> y;
	int max_diff = v[0];
	v.push_back(x);
	sort(v.begin(),v.end());
	for(int i = 0;i<n;i++){
		max_diff= max(max_diff,v[i+1]-v[i]);
	}
	if(v[n]==x){
		max_diff = max(2*(v[n]-v[n-1]), max_diff);
	}
	cout << max_diff;
	cout << "\n";	
}


int main(){
	int t;
	cin >> t;
	while(t--) solve();
}









