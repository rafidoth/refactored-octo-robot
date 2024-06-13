
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    string a,b;
    cin >> a >> b;
    char temp = b[0];
    b[0] = a[0];
    a[0] = temp;
    cout << a << " "<< b<< endl;
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
