
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007




int main() {
    int n;
    cin >> n;
    vector<int> divisors;
    for(int i= 1; i*i<=n;i++){
        if(n%i==0){
            divisors.push_back(i);
            if(n/i!=i){
                divisors.push_back(n/i);
            }
        }
    }
    for(int x:divisors){
        cout << x << " ";
    }
    cout << endl;
}
