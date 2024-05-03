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


// simple bfs implementation
void BFS(int source){
   queue<int> q;
   q.push(source);
   visited[source] = true;
   while(!q.empty()){
      int current = q.front();
      q.pop();
      cout << current << " ";
      // child means each destination you can from the current 
      for(int child:adjList[current]){
         if(!visited[child]){
            visited[child] = true;
            q.push(child);
         }
      }
   }
}


// track the distance between source and every node
void BFSdistance(int source, vector<int>& distance){
   queue<int> q;
   q.push(source);
   visited[source] = true;
   while(!q.empty()){
      int current = q.front();
      q.pop();
      cout << current << " ";
      // child means each destination you can from the current 
      for(int child:adjList[current]){
         if(!visited[child]){
            distance[child] = distance[current] + 1;
            visited[child] = true;
            q.push(child);
         }
      }
   }
   cout << endl;
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
   
   vector<int> distanceFromSource(N,0);
   int source;
   cin >> source;
   cout << endl;
   BFSdistance(source, distanceFromSource);
   cout<<"Shortest distance of other nodes from source "<<source << endl;
   for(int i = 0;i<N;i++){
      if(distanceFromSource[i]!=0){
         cout << i << " : " << distanceFromSource[i];
         cout << endl;
      }
   }
   
}



/*
input
5 8
2 28
2 3
3 2
3 11
11 28
11 22
22 2
28 22
2
*/