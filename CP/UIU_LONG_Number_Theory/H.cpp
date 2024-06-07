
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007




int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif
    int n;
    while(cin>> n){
        if(n==0) break;
        int ncp = n;
        n = abs(n);
        cout << ncp << " = ";
        if(ncp<0) cout << "-1 x ";
        while(n%2==0){
            n/=2;
            cout << 2 ;
            if(n>1) cout << " x ";
        }
        for(int i =3;i*i<=n;i+=2){
            while(n%i==0){
                n/=i;
                cout << i ;
                if(n>1) cout << " x ";
            }
        }
        if(n>2){
            cout<< n;
        }
        cout<< endl;
    }
}
