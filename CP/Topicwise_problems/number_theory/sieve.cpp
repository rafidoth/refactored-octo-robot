
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007
#define debug(...) fprintf(stderr, __VA_ARGS__), fflush(stderr)
const int N = 1e8+2;
vector<lli> primes;
/* vector<bool> is_prime(N,true); */
/* bitset<N+2>is_prime;  6.870s*/
bool is_prime[N+2];
/* 0 means prime */
/* 1 means not prime  */
void sieve(){
    // 0 and 1 marked as non prime
    is_prime[0] = 1;
    is_prime[1] = 1;
    /* ignoring all even numbers as they are not prime */
    /* excluding 2 and started checking only odds */
    for(int i = 3;i*i<=N;i+=2){
        if(!is_prime[i]){
            for(long long k = i*i; k<=N;k+=i){
                is_prime[k] = 1;
            }
        }
    }
    /* primes.push_back(2); */
    /* for(int i =3; i<=N;i+=2){ */
    /*     if(!is_prime[i]){ */
    /*         primes.push_back(i); */
    /*     } */
    /* } */
}



int main() {
    clock_t z = clock();
    sieve() ;
    /* for(int x: primes) cout << x << " "; */
    /* cout << endl; */
    debug("Total Time: %.3f\n", (double)(clock() - z) / CLOCKS_PER_SEC);
}

