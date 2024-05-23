
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i =0;i<n;i++){
		cin >> v[i];
	}

	if(n==2){
		cout << "YES"<<endl;
		return ;
	}
	map<int,int> mp;
	for(int i =0;i<n;i++){
		mp[v[i]]++; 
		if(mp.size()>2){
			cout << "NO" << endl;
			return;
		}
	}
	if(mp.size()==1){
		cout << "YES" <<endl;
		return;
	}
	vector<int> twovalues;
	// cout << "size : "<< mp.size()<<endl;
	for(auto pair : mp){
		// cout << pair.first<< " "<<pair.second<<endl;	
		twovalues.push_back(pair.second);
	}
	
	if(twovalues[0]==twovalues[1] || abs(twovalues[0]-twovalues[1])==1){
		cout << "YES" <<endl;
	}else cout << "NO"<<endl;
	
	
}



int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    solve();
  }
}
