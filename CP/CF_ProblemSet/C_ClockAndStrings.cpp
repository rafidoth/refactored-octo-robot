
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	if(a>b){
		swap(a,b);
	}
	if(c>d){
		swap(c,d);
	}
	
	bool f1,f2;
	if(c>a && c<b) f1 = true;
	else f1 = false;
	if(d>a && d<b) f2 = true;
	else f2 = false;

	if((f1 && f2) ||(!f1&& !f2)){
		cout << "NO" <<endl;
	}else{
		cout << "YES" <<endl;
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
