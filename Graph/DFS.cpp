#include<bits/stdc++.h> 
using namespace std;
typedef long long int lli;
#define MOD 1000000007



const int N = 1e5+10;
vector<int> adjList[N];
vector<bool> visited(N,false);



//for directed graph
void make_edge(int src, int des){
   adjList[src].push_back(des);
}

//for undirected graph
void u_make_edge(int src, int des){
   adjList[src].push_back(des);
   adjList[des].push_back(src);
}



void printAdjList(){
   //print the adjecency list
   cout << "Adjecency List" <<endl;
   for(int i = 0;i<N;i++){
      if(adjList[i].size()!=0){
         cout << i << " : ";
         for(int x: adjList[i]){
            cout << x << " ";
         }
         cout << endl;
      }
   }
   cout <<endl;
}



// void dfs(int source){
//     cout << source << " "<<endl;
//     visited[source] = true;
//     for(int child : adjList[source]){
//         if(!visited[child]){
//             cout << "par "<< source << " child "<< child<<endl;
//             dfs(child);
//         }
//     }
//     cout << "returned now " << source <<endl;
// }


void dfs(int source){
    cout << source << " ";
    visited[source] = true;
    for(int child : adjList[source]){
        if(!visited[child]){
            dfs(child);
        }
    }
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int V,E;
    cin >> V >> E;
    for(int i =0; i<E;i++){
        int sV, dV;
        cin >> sV >> dV;
        make_edge(sV,dV);
    }
    printAdjList();

    for(int i = 0;i<N;i++){
        if(adjList[i].size()!=0 && !visited[i]){
            dfs(i);
        }
    }
    
}

