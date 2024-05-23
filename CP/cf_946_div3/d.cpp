
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
  int sz;
  cin >> sz;
  string str;
  cin >> str;
  cout << str<<endl;
  int n = 0;
  int e = 0;
  int s = 0;
  int w = 0;
  string res = "";
  for (char x : str) {
    if (x == 'N')
      n++;
    else if (x == 'S')
      s++;
    else if (x == 'E')
      e++;
    else if (x == 'W')
      w++;
  }
 
  if (abs(n - s) % 2 != 0 || abs(e - w)%2 != 0) {
    cout << "NO" << endl; 
    return;
  }
  vector<int> pos;
  for (int i = 0; i < sz; i++) {
    cout << "testing : "<< n << " "<< e << " "<< s<<  " "<< w<<" "<<res << endl;
    if (str[i] == 'N'&& n!=0) {
      n--;
      res += 'R';
    } else if (str[i] == 'S'&& s!=0) {
	  s--;
	  res += 'R';
    } else if (str[i] == 'E'&& e!=0) {
      e--;
      res += 'R';
    } else if (str[i] == 'W' && w!=0) {
      w--;
      res += 'R';
    }else{
    	res+='?';
    	pos.push_back(i);
    }
  }
  cout << res<<endl;
  
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
