
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

bool check(vector<int>& a, vector<int>&b){
	for(int i =0;i<(int)a.size();i++){
		if(a[i]>b[i]){
			// cout << a[i] << ">"<< b[i] <<endl;
			return false;
		}
	}
	return true;
}


void add(vector<int>& a,int ele){
	a[(int)a.size()-1] = ele;
	sort(a.begin(),a.end());
}

void print(vector<int>& arr){
	for(int x:arr) cout << x << " ";
	cout << endl;
}

void answer() {
	int n;
	cin >> n;
	vector<int> a(n),b(n);
	for(int i = 0;i<n;i++) cin >> a[i];
	for(int i = 0;i<n;i++) cin >> b[i];
	int j = 0;
	// print(a);
	while(!check(a,b)&& j<n){
		add(a,b[j]);
		j++;
		// print(a);
	}
	cout << j << endl;
}




int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
	// cout << "TEST CASE " << (i+1)<<endl;
    answer();
  }
}
