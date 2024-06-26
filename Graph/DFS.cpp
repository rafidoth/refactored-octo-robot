#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


	
void dfs(vector<vector<int>> &G, int start, vector<bool>&visited){
	visited[start] = true;
	cout << start << "->";
	for(int Vertex : G[start]){
		if(visited[Vertex] == false){
			dfs(G, Vertex, visited);
		}
	}
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int V,E;
    cin >> V >> E;
	vector<vector<int>> Graph(V);
	for(int i =0;i<V;i++){
		int source, end;
		cin >> source >> end;
		//making directed edge
		Graph[source].push_back(end);
		Graph[end].push_back(source);
		
	}   

	//printing the adj List
	for(int i =0; i< V;i++){
		cout << i << "-> ";
		for(int j : Graph[i]) cout << j << " ";
		cout << "\n";
	}     

	// DFS traversal code
	vector<bool> visited(V,false);	
	for(int i=0;i<V;i++){
		if(visited[i]==false){
			dfs(Graph, 1,visited);
		}
	}
	cout << endl;

	
}	

