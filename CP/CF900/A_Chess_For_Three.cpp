
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007




void answer() {
	int p,q,r;
	cin >> p >> q >> r;
	int t = (p+q+r);
	if(t%2!=0){
		cout << "-1"<<endl;
	}else{
		if(p+q<=r){
			cout << (t/2)-(r-(p+q))/2 <<endl;
		}else{
			cout << t/2 << endl;
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
