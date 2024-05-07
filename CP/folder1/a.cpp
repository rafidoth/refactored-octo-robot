
#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007

int solve(vector<int> v, int i,int box1=0, int box2=0){
    if(i<0) return box1;
    if(box1<=box2){
      box1+=v[i];
    }else{
      box2+=v[i];
    }
    return solve(v, i-1, box1, box2);
}


int main(){
  	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    std::vector<int> v(n);
    int sum = 0;
    for(int i =0;i<n;i++){
      cin >> v[i];
      sum+= v[i];
    }	
    sort(v.begin(),v.end());
    int x1 = solve(v,n-1);
    int x2 = sum -x1;
    cout << abs(x1-x2)<<"\n";
}
