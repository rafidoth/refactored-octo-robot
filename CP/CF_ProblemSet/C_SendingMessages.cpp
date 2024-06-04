
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007
void answer() {
    int n,a;
    lli f,b;
	cin >> n >> f >> a >> b;
	vector<int> arr(n);
	for(int i =0;i<n;i++){
        cin >> arr[i];	    
	}
    int init = 0;
    for(int k=0;k<n;k++){
        lli without_reset = (lli)(arr[k]-init)*a;
        f-= min(b,without_reset); 
        if(f==0){
            cout << "NO" <<endl;
            return;
        }
        init = arr[k];
    }
    //cout << f << "---- charge remained" <<endl;
    if(f>=0){
        cout << "YES" <<endl;
    }else{
        cout << "NO" << endl;
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
