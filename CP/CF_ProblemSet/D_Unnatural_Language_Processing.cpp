
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<string> ans;
    for(int i=n-1;i>=0;i--){
        char x = str[i];
        if(x=='a' || x== 'e'){
            string res = "";
            res+= str[i-1];
            res+= str[i];
            ans.push_back(res);
            i-=1;
        }else{
            string res = "";
            res+= str[i-2];
            res+= str[i-1];
            res+= str[i];
            ans.push_back(res);
            i-=2;
        }
    }
    reverse(ans.begin(),ans.end());
    int sz = ans.size();
    for(int i = 0 ;i<sz;i++){
        if(i== sz-1){
            cout << ans[i] ;
            break;
        }
        cout << ans[i] << ".";
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
