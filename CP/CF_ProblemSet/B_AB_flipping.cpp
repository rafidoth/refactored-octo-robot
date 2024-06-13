
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    int n;
    cin >> n;
    vector<char>arr(n+1);
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    
    int keep_cnt = 0;
    int cnt = 0 ;
    vector<bool> p(n+3,false);
    while(true){
        /* operation part  */
        for(int i = 1;i<=n-1;i++ ){
            if(p[i]){
                continue;
            }
            if(arr[i]=='A' && arr[i+1] =='B'){
                swap(arr[i],arr[i+1]);
                cnt++;
                p[i] = 1;
                break;
            }
        }
        keep_cnt++;
        if(keep_cnt != cnt){
            break;
        }
        /* for(char x : arr) { */
        /*     cout << x << " "; */
        /* } */
        /* cout << endl; */
    }
    cout << cnt << endl;
}




int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    /* cout << "test case no : " << i+1 << endl; */
    answer();
  }
}
