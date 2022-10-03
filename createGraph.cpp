
#include <bits/stdc++.h>
using namespace std;
// class tampleting
template <typename T>
class Giraff
{
public:
    //unordered_map<T, list<T>> adjList; // most suitable way, can have any differnet nodes
    // ->USE FULL IN DISCONNECTED GRAPHS//
    //->Number of nodes given
    vector<vector<T>> adjList;// when nodes are defiened from 0 to n-1
    int size;
    //Resizing vetor//
    Giraff(int n){
        adjList.resize(n);
        size=n;
    }
    
    void add_edge(T u, T v, bool isDir = 0)
    {
        adjList[u].push_back(v);
        if (isDir == 0)
            adjList[v].push_back(u);
    }


    void display_graph()
    {
        for (int i=0;i<size;i++)
        {
            cout << endl;
            cout << i << "->";
            for (auto j : adjList[i])
            {
                cout << j << ",";
            }
        }
    }
    // void bfs()
    // {
    //     // need a map, and a queue
    //     map<T, bool> visited;
    //     queue<T> Q;

    //     // mark all as unvisited on map
    //     for (auto i : adjList)
    //     {
    //         visited[i.first] = false;
    //     }
    //     cout << endl;

    //     // deciding the first node to start with
    //     unordered_map<int, list<int>>::iterator itr; // itrator should have defined typename
    //     itr = adjList.begin();                       // itrator to adjList first element, ie pointer to its first element
    //     T first_node = itr->first;                   // acessing first element of adjList

    //     // 1.Pushing in Q
    //     Q.push(first_node);
    //     visited[first_node] = true;
    //     while (!Q.empty())
    //     {
    //         // taking value of front in Queue
    //         T temp = Q.front();
    //         Q.pop();
    //         cout << temp << " ";

    //         // 2.adding adjecent elements to queue
    //         for (auto i : adjList[temp])
    //         {
    //             if (visited[i] == false)
    //             {
    //                 // 3.marking pushed element as visited
    //                 visited[i] = true;
    //                 Q.push(i);
    //             }
    //         }
    //     }
    // }

    void bfsDisconnected()
    {
        // need a map, and a queue
        // mark all as unvisited on map
        vector<bool> visited(size,false);
        queue<T> Q;

        cout << endl;

        // deciding the first node to start with
        for (int j=0;j<size;j++)
        {   //some node node connected to previous root 
            if (visited[j] == false)
            {
                // 1.Pushing in Q
                Q.push(j);
                visited[j] = true;
                while (!Q.empty())
                {
                    // taking value of front in Queue
                    T temp = Q.front();
                    Q.pop();
                    cout << temp << " ";

                    // 2.adding adjecent elements to queue
                    for (auto i : adjList[temp])
                    {
                        if (visited[i] == false)
                        {
                            // 3.marking pushed element as visited
                            visited[i] = true;
                            Q.push(i);
                        }
                    }
                }
            }
        }
    }
};
int main()
{
    cout << "Give the map:";
    cout << "\n Number of nodes: and edges: ";
    int n,m , u, v;
    cin >> n>>m;
    Giraff<int> G1(n);
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        G1.add_edge(u, v);
    }
    G1.display_graph();
    // GRaph input;/ representation executed
    G1.bfsDisconnected();
}
