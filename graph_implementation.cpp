#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u, int v, bool direction ){
        //direction=0--> undirected
        //direction=1--> directed

        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }

};


int main(){
    int n,m;
    cout<<"enter number of nodes and edges: ";
    cin>>n>>m;
    graph g;
    cout<<"enter the nodes which are connected by edges: ";
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    
    return 0;
}