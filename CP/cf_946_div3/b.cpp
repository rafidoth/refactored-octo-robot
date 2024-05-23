#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	set<char> uniq;
	for(char x:s) uniq.insert(x);
	int p = uniq.size();
	vector<char> uniq_vec;
	for (auto& ch : uniq) {
		// cout << ch << " ";
		uniq_vec.push_back(ch);
	}
	// cout << endl;
	// cout << p << endl;
	unordered_map<char,char> opposite;
	for(int i = 0;i<p;i++){
		// cout<< uniq_vec[i] << "--" << uniq_vec[p-i-1]<<endl;
		opposite[uniq_vec[i]] = uniq_vec[p-i-1];
	}
	// cout << s<<endl;
	for(int i =0;i<n;i++){
		s[i] = opposite[s[i]];
		// cout << s[i] << "<<"<<endl;
	}
	cout << s;
	cout << endl;
	
}


int main(){
	    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif 

	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
// 1
// 1
// 2
// 2
// 1
// 1
// 0
// 1
// 1
// 2
// 5
