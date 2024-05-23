#include <bits/stdc++.h>
using namespace std;

// after TLE

void answer() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  map<pair<int, int>, int> mp1;
  map<pair<int, int>, int> mp2;
  map<pair<int, int>, int> mp3;
  map<pair<int, pair<int, int>>, int> mp;

  long long count = 0;

  for (int i = 0; i < n - 2; i++) {
    int p = arr[i];
    int q = arr[i + 1];
    int r = arr[i + 2];
    mp1[{p, q}]++;
    mp2[{p, r}]++;
    mp3[{q, r}]++;
    mp[{p, {q, r}}]++;
  }

  for (auto pair : mp1) {
    int x = pair.second;
    count += ((1LL * x * (x - 1)) / 2);
  }

  for (auto pair : mp1) {
    int x = pair.second;
    count += ((1LL * x * (x - 1)) / 2);
  }

  for (auto pair : mp2) {
    int x = pair.second;
    count += ((1LL * x * (x - 1)) / 2);
  }

  for (auto pair : mp3) {
    int x = pair.second;
    count += ((1LL * x * (x - 1)) / 2);
  }

  long long duplicate_pairs = 0;
  for (auto pair : mp) {
    int x = pair.second;
    duplicate_pairs += ((1LL * x * (x - 1)) / 2);
  }

  count = count - 3 * duplicate_pairs;
  cout << count << endl;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
#endif

  int t;
  cin >> t;
  while (t--) {
    answer();
  }
}
// 2
// 0
// 3
// 1
// 8
// 4
// 3
// 2
