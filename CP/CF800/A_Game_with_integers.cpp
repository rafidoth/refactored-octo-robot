#include<bits/stdc++.h>
using namespace std;


void solve(){
	int n; cin >> n;
	if((n-1) %3==0 || (n+1) %3 == 0){
		cout << "First"<<endl;
	}else{
		cout << "Second"<<endl;
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


