#include <bits/stdc++.h>
using namespace std;

// void adjMatrix(vector<vector<int>> &mat, int u, int v){

//   mat[u][v] = 1;
//   mat[v][u] = 1;

// }

// int main(){
// //  We are going to implement the Representation of the Graph using the C++.
// //   There are the two methods for representing the Graph.
// //  1. Using the Adjacency Matrix
// //  2. Using the Adjacency List for the Graph ( But we are used in case of the undirected Graph.)
// int vertices = 4;

// vector<vector<int>> mat(vertices, vector<int> (vertices, 0));
// adjMatrix(mat, 0 , 1);
// adjMatrix(mat, 0 , 2);
// adjMatrix(mat, 0 , 3);
// adjMatrix(mat, 2 , 3);
// adjMatrix(mat, 3 , 2);
// adjMatrix(mat, 1 , 2);
// adjMatrix(mat, 3 , 0);

// int row = 4;
// int col = 4;

// for(int i = 0; i < row; ++i){
//     for(int j = 0; j < col; ++j){
//         cout<<mat[i][j]<<" ";
//     }
//     cout<<endl;
// }

//  We are going to implement the graph using the Adjacency List.

// }

// class Graph{

// public:

// map<int, vector<int>> adj;

// void addEdge(int source, int destination, int direction){

// adj[source].push_back(destination);

// if(direction == 0){
//     adj[destination].push_back(source);
// }

// }
// //  For Printing the Element..
//      void printFun(){

//        for(auto element: adj){
//           cout<<element.first<<" -> ";
//         //   element.second.sort();
//         sort(element.second.begin(), element.second.end());
//           for(auto element2: element.second){
//                cout<<element2<<",";
//           }
//           cout<<endl;
//        }

//      }

// };

// int main(){

// int vertices, edges;
// cout<<"Enter the number of Vertices:- ";
// cin>>vertices;

// cout<<"Enter the Number of Edges:- ";
// cin>>edges;

// Graph g;

// for(int i = 0; i < edges; ++i){
//     int u, v;
//     cout<<"Enter the source and destination:- "<<endl;
//     cin>>u >> v;
//    g.addEdge(u, v, 0);
// }

// vector<vector<int>> ans;
// // g.printFun();

// for(auto element: g.adj){
//     sort(element.second.begin(), element.second.end());
//   ans.push_back(element.second);
// }

// for(auto element: ans){
//        for(auto element2: element){
//            cout<<element2;
//        }
//        cout<<endl;
// }

// // 0 1
// // 0 4
// // 4 1
// // 4 3
// // 1 3
// // 1 2
// // 3 2

// // 4 3
// // 0 3
// // 0 2
// // 2 1
// }

class graph
{

public:
  map<int, set<int>> adj;
  unordered_map<int, bool> track;

  //  For Creating the Edges.
  void createEdges(int u, int v, int direction)
  {
    // Here we need to create the Undirected Graph;
    adj[u].insert(v);

    // If the graph is the undirected Graph;
    if (!direction)
    {
      adj[v].insert(u);
    }
  }
  void print()
  {
    // Print the key and the Value of the Graph;
    for (auto element : adj)
    {
      cout << element.first << " -> ";
      for (auto element2 : element.second)
      {
        cout << element2 << " ";
      }
      cout << endl;
    }
  }

  //  Here are the implementation for the BFS Algorithm...

  void bfs()
  {
    queue<int> q;
    q.push(0);

    while (!q.empty())
    {

      int node = q.front();
      q.pop();

      if (track[node] != true)
      {
        cout << node << " ";
        track[node] = true;
      }

      for (auto element : adj[node])
      {
        if (track[element] != true)
        {
          q.push(element);
        }
      }
    }
  }
};

int main()
{

  int vertices, edges;
  cout << "Enter the number of vertices:- " << endl;
  cin >> vertices;
  cout << "Enter the number of Edges:- " << endl;
  cin >> edges;

  graph g;

  for (int i = 0; i < edges; ++i)
  {
    int u, v;
    cout << "Enter the connection between the nodes:- " << endl;
    cin >> u >> v;
    g.createEdges(u, v, 0);
  }

  g.print();
  cout << "The BFS are:- ";
  g.bfs();
}