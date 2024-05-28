
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007



void answer() {
	lli u,l;
	cin >> l >> u;
	lli mx = 1;
	int mx_d = 0;
	for(lli n=l;n<=u;n++){
		int count = 0;
		for(int i=1;i*i<=n;i++){
			if(n%i==0){
				if(i == (n/i)){
					count++;
				}else{
					count+=2;
				}
			}
		}
		if(count>mx_d){
			mx_d = count;
			mx = n;
		}	
	}
	cout << "Between "<<l<<" and "<<u<<", "<<mx<<" has a maximum of " <<mx_d<<" divisors."<<endl;
}
//Between 1 and 10, 6 has a maximum of 4 divisors.



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
