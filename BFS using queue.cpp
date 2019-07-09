#include<bits/stdc++.h>
using namespace std;

#define Max 1009 //Let the max number of nodes be 1009
vector<int> graph[Max],path; //graph define
bool visit[Max]; //store visited nodes
int parent[Max]; //store parent nodes

void bfs(int source, int dest){
    queue<int> q; //declaring queue
    q.push(source); //pushing source in the queue
    visit[source] = true; //storing source in the visited array
    parent[source]  = -1; //source has no parent = -1

    while(q.empty() == false) //until the queue becomes empty
    {
        int u = q.front(); //front nilam
        q.pop(); //front pop kore dilam
        for(int i = 0; i < graph[u].size(); i++) //sob adjacent e gelam
        {
            int v = graph[u][i]; //adjacent detection
            if(visit[v] == false){
                parent[v] = u;
                if(v == dest)return; //v dest hole break
                q.push(v); //na hole push and visited
                visit[v] = true;
            }
        }
    }
}

void getPath(int node){
    if(node == -1)return; //source er parent -1 tai break
    path.push_back(node);
    getPath(parent[node]);  //destination er parent k call korchi
}
void printPath(int node){
    getPath(node);
    reverse(path.begin(), path.end());
    cout << "Path :";
    for(int u : path){
        cout << " " << u;
    }
    cout << endl;
}

int main(){


    int vertices, edges;
    cout << "Number of vertices: ";
    cin >> vertices;
    cout << "Number of edges: ";
    cin >> edges;
    for(int i = 1; i <= edges; i++){
        int u, v;
        cout << "Input connected nodes: ";
        cin >> u >> v;
        graph[u].push_back(v); //defining bidirectional
        graph[v].push_back(u); //defining bidirectional
    }

    int source, dest;
    cout << "Enter Source: ";
    cin >> source;
    cout << "Enter destination: ";
    cin >> dest; //taking source and destination as input

    bfs(source, dest);
    cout << "Shortest Path: ";
    printPath(dest);

    return 0;
}
