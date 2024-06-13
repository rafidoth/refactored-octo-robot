
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define MOD 1000000007

void answer() {
    int n,m;
    cin >> n >> m;
    char mat[n+1][m+1];
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=m;k++){
            cin >> mat[i][k] ;
            if(mat[i][k] == '#'){
                mp[i]++;
            }
        }
    }

    int mx_line_no = 0;
    int mx_no =0;
    for(auto& p : mp){
        if(p.second > mx_no){
            mx_no = p.second;
            mx_line_no = p.first;
        }
    }
    pair<int,int> range;
    for(int i=1;i<=m;i++ ){
        if(mat[mx_line_no][i]=='#'){
            range.first = i;
            break;
        }
    }

    for(int i=m;i>=1;i--){
        if(mat[mx_line_no][i]=='#'){
            range.second = i;
            break;
        }
    }

    /* int r =(range.second-range.first+1 );  */
    /* cout << range.first << " " << range.second << endl; */
    cout << mx_line_no << " ";
    cout << ((range.first+range.second)/2) <<endl;
}





int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    /* cout << "test case no : " << i+1<<endl; */
    answer();
  }
}
