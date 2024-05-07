#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



class Solution {
public:
    void dfs(int source,int destination, vector<int> adjList[], vector<bool>& visited, bool& flag){
        if(source == destination){
            flag = true;
            return;
        }
        // cout << source << " ";
        visited[source] = true;
        for(int child : adjList[source]){
            if(!visited[child]){
                dfs(child,destination,adjList,visited,flag);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source ==destination) return true;
        vector<int> adjList[n];
        for(vector<int> x : edges){
            adjList[x[0]].push_back(x[1]);
            adjList[x[1]].push_back(x[0]);
        }
        /*
        for(int i = 0;i<n;i++){
            cout << i << "  : ";
            for(int x : adjList[i]){
                cout << x << " ";
            }
            cout << endl;
        }
        */
        vector<bool> visited(n,false);
        bool flag = false;
        dfs(source,destination,adjList,visited,flag);
        return flag;
    }
};




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> edges = {{0,1},{0,2},{3,5},{5,4},{4,3}};
    // edges = [[0,1],[0,2],[3,5],[5,4],[4,3]] 
    int n = 6;
    Solution solution;
    cout << solution.validPath(n,edges,1,2) << endl;

}

