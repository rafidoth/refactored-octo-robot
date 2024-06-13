
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007





void answer() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<lli>pref(n);
    vector<lli>mxarr(n);
    pref.push_back(0);
    map<int,lli> mp;
    for(int i =0;i<n;i++) cin >> arr[i];
    int cnt =0;
    pref[0] = arr[0];
    for(int i=1;i<n;i++){
        pref[i] = pref[i-1] + arr[i];
    }
    mxarr[0] = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > mxarr[i-1]){
            mxarr[i] = arr[i];
        }else{
            mxarr[i] = mxarr[i-1];
        }
    }

    for(int i=0;i<n;i++){
        if(mxarr[i]== (pref[i]-mxarr[i])){
            cnt++;
        }
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
        /* cout<< "test "<< i+1<<endl; */
        answer();
      }
}
