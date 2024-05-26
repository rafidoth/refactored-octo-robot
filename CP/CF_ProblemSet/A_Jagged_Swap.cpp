#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n ;
	cin >> n;
	vector<int> arr(n);
	for(int &ptr : arr) cin >> ptr;
	if(arr[0]==1){
		cout <<  "YES" << endl;
	}else{
		cout << "NO"<< endl;
	}
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif 
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}


