#include<bits/stdc++.h>
using namespace std;


void solve(){
	int sm, big;
	cin >> sm >> big;
	int need_for_big = ceil(big/2.0);
	cout << need_for_big << " ";
	int space_after_placing_big = need_for_big*15 - big *4;
	cout << space_after_placing_big<< " ";
	if(space_after_placing_big >= sm){
		cout << need_for_big << endl;
	}else{
		int need_for_extra_sm = ceil((sm-space_after_placing_big)/15.0) ;
		cout <<need_for_extra_sm +  need_for_extra_sm<<endl;
	}
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
