
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    int n,m;
    string a,b;
    cin >> n >> m;
    cin >> a;
    cin >> b;
    int one =0;
    int zero=0;
    for(char x:b){
        if(x== '1') one++;
        else zero++;
    }
    int o = one;
    int z = zero;
    int ans = 0;
    string str = "" ;
    bool f = false;

    for(int i = n-1;i>=0;i--){
        for(int k=i;k>=0;k--){
            if(a[k]=='1' && o){
                str +=a[k];
                o--; 
            }else if (a[k]== '0' && z){
                str +=a[k];
                z--; 
            }else{
                o = one;
                z = zero;
                break;
            }
            if(k==0){
               f = true;
               ans = i+1; 
            } 
        }
        if(f){
            break;
        }
        /* cout << "ans " << str << endl ; */
        /* str = ""; */
    }
    cout << ans<<endl;
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
