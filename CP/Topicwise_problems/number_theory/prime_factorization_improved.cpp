#include<bits/stdc++.h>
using namespace std;




int main(){
    int n;
    cin >> n;
    vector<int> prime_facts;
    if(n==0){
        cout << 0 << endl;
        return 0;
    }
    while(n%2==0){
        n/=2;
        prime_facts.push_back(2);
    }
    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
            n/=i;
            prime_facts.push_back(i);
        }
    }

    if(n!=1){
        prime_facts.push_back(n);
    }
    
    
    for(int x: prime_facts){
        cout << x << " " ;
    }
    cout << endl;
}
