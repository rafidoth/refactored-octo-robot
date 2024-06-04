
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    int n,m;
    cin >> n>> m;
    string str;
    cin >> str;
    map<char,int> mp;
    mp['A'] = 0;
    mp['B'] = 0;
    mp['C'] = 0;
    mp['D'] = 0;
    mp['E'] = 0;
    mp['F'] = 0;
    mp['G'] = 0;
    for(char x: str) {
        mp[x]++;
    }

    int ans = 0;
    for(auto pair : mp ){
        if(pair.second < m){
            ans+= (m- pair.second);
        }
    }
    cout << ans <<endl;
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
