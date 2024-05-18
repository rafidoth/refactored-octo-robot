#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007


	
bool cycleExists(vector<vector<int>> &G, int start, vector<bool>&visited, int parent){
	visited[start] = true;
	cout << start << "->";
	for(int child : G[start]){
		if(visited[child] == false){
			if(cycleExists(G, child, visited, start)){
				return true;
			}
		}else if(child != parent){
			return true; // cycle detected
		}
	}
	return false;
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


	// cycle detection
	vector<bool> visited(V,false);	
	for(int i=0;i<V;i++){
		cycleExists(Graph, 1,visited,-1);
	}
	cout << endl;

	
}	

