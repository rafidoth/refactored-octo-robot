#include<bits/stdc++.h>
using namespace std;






void solve(){
	int n;
	string str;
	cin >> n;
	cin >> str;
	int not_consecutive_dotcount = 0;
	int dotcount = 0;
	bool f = false;
	for(int i=0;i<n;i++){
		if(str[i]=='.'){
			dotcount++;
			not_consecutive_dotcount++;
		}
		if(dotcount==3){
			f = true;
			break;
		}
		if(str[i] == '#'){
			dotcount = 0;
		}
	}
	if(f) cout << 2 << endl;
	else{
		cout << not_consecutive_dotcount<<endl;
	}
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		solve();
	}
}

