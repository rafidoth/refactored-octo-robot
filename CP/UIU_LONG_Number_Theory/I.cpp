
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007
const int N = 1e8+2;
bool p[N+2];
/* 0 is prime */
/* 1 is non prime */
void sieve(){
    for(long long i=3;i*i<=N;i+=2){
        if(!p[i]){
            for(long long k = i*i ; k<=N;k+=i){
                p[k] = 1;
            }
        }
    }
}

void ans(){
    lli n;
    cin >> n;
    if(n<=4) cout << n << " is not the sum of two primes!" << endl;
    else{
        if(!p[n-2] && (n-2)%2!=0){
            cout << n << " is the sum of 2 and " << (n-2) << "."<< endl;
            return;
        }else{
            for(lli i = 3;i<=n/2;i+=2){
                if(!p[i] && (n-i)%2!=0 && !p[n-i]){
                    cout<< n << " is the sum of " << i << " and " << (n-i) << "."<< endl;
                    return;
                }
            }
            cout << n << " is not the sum of two primes!" << endl;
        }

    }
}




int main() {
    int t = 100000;
    sieve();
    while(t--){
        ans();
    }
}
