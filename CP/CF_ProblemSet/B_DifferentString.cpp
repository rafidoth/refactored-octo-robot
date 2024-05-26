
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007




bool allsame(string s){
	char a = s[0];
	for(char x:s){
		if(x!=a) return false;
	}
	return true;
}

void answer() {
	string str;
	cin >> str;
	string r = str;
	int n = str.size();
	if(n==1 || allsame(str)){
		cout << "NO"<<endl;
		return;
	}else{
		while(r==str){
			for(int i =0;i<n-1;i++){
				swap(r[i],r[i+1]); 
			}
		}
	}	
	cout << "YES"<<endl;
	cout << r<<endl;
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
