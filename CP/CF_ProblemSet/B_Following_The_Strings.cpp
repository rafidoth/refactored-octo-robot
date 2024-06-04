
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
	int n;
	cin >> n ;
	vector<int> arr(n);
	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	char ch = 'a';
	map<char,int> mp;
	string ans = "";
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			ans +=ch;
			mp[ch] = 0;
			ch++;
		}else{
			for(auto pair : mp){
				if(pair.second == arr[i]-1){
					mp[pair.first]++;
					ans+= pair.first;
					break;
				}
			}
		}
		// cout << "debug-------------"<<endl;
		// for(auto pair : mp ){
		// 	cout << pair.first << " "<< pair.second<<endl;
		// }
		// cout << ans << endl;
	}
	cout << ans << endl;

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
