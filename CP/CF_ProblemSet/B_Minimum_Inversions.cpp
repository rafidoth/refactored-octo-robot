
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<int,int> mp;
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0;i<n;i++){
        cin >> b[i];
    }
    for(int i =0 ; i<n;i++){
        mp[a[i]] = b[i];
    }

    for(auto pair:mp){
        cout << pair.first << " " ;
    }
    cout <<endl;
    for(auto pair:mp){
        cout << pair.second<<" ";
    }
    cout << endl;
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
