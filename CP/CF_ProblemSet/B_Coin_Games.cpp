
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007


void answer() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int u_count = 0;
	for(char x : str){
		if(x=='U'){
			u_count++;
		}
	}
	if(u_count==0){
		cout << "NO" <<endl;
		return;
	}
	if(u_count%2==0){
		cout << "NO"<<endl;
		return;
	}else{
		cout << "YES"<<endl;
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
	// cout << "Test Case "<<(i+1)<<endl;
    answer();
  }
}
