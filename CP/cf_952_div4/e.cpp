#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    int x,y,z;
    lli k;
    cin >> x >> y>> z >> k;

    vector<lli> divs;
    for(lli i = 1;i*i<=k;i++){
        if(k%i==0){
            if(i<=x || i<=y || i<=z){
                divs.push_back(i);
            }
            lli tmp = k/i; 
            if(tmp<=x || tmp<=y || tmp<=z){
                divs.push_back(tmp);
            }
        }
    }
    int sz = divs.size() ;
    lli ans = 0;
    for(int p=0;p<sz;p++){
        for(int q=0;q<sz;q++){
            for(int r=0;r<sz;r++){
                if(divs[p]<=x && divs[q]<=y && divs[r]<=z){
                    lli prod = (lli)divs[p]*divs[q]*divs[r];
                    if(prod==k){
                        ans = max(ans,(lli)(x-divs[p]+1)*(y-divs[q]+1)*(z-divs[r]+1));
                    }
                }
            }
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
    /* cout << "tc " << i+1 << endl; */
    answer();
  }
}
