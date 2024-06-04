
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    int mm = 0;
    for(int i =0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            mm++;
        }
    }

    if(mm== 0){
        cout << "YES"<<endl;
    }else if(mm==1 && arr[n-1] <= arr[0]){
        cout << "YES"<<endl;
    }else{
        cout << "NO"<<endl;
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
