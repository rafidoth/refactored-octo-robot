
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    int n,m;
    cin >> n >> m;
    if(n<m || (n-m)%2!=0){
        cout << "NO" <<endl;
        return;
    }
    cout << "YES"<<endl;
}




int main() {
#ifndef ONLINE_JUDGE
  /* freopen("input.txt", "r", stdin); */
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    answer();
  }
}
