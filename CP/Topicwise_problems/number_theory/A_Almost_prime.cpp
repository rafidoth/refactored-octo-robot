
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

// sqrt(n)
vector<int> primeFacts(int n){
    vector<int> prime_facts;
    if(n==0){
        prime_facts.push_back(0);
        return prime_facts;
    }
    while(n%2==0){
        n/=2;
        prime_facts.push_back(2);
    }
    for(int i =3; i*i <= n; i+=2){
        while(n%i==0){
            prime_facts.push_back(i);
            n/=i;
        }
    }


    if(n!=1){
        prime_facts.push_back(n);
    }
    return prime_facts;
}

int main() {
    int n;
    cin >> n;
    int count= 0;
    for(int i=6;i<=n;i++){
        vector<int> pf = primeFacts(i);
        set<int> set1;
        for(int x: pf){
            set1.insert(x);
        }
        if(set1.size()==2){
            count++;
        }
    }
    cout << count << endl;
}












