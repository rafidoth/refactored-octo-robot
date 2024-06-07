
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007


vector<int> sieve(int n ){
    vector<bool> is_prime(n+2,true);
    is_prime[0]= false;
    is_prime[1]= false;
    vector<int> primes;
    for(int i=2;i*i<n;i++){
        if(is_prime[i]){
            for(int k= i*i;k<n;k+=i){
                is_prime[k] = false;
            }
        }
    }

    for(int i=2;i<n;i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}


int countPrimes(int n ){
    vector<int> primes = sieve(n);
    return (int)primes.size();
}


int main() {

    int n;
    cin>> n;
    cout << countPrimes(n) <<endl;

}
