/*
using topologicalSort, Kahan's algo
*/
#include <bits/stdc++.h>
using namespace std;
// class tampleting
template <typename T>
class Giraff
{
public:
    // unordered_map<T, list<T>> adjList; // most suitable way, can have any differnet nodes
    //  ->USE FULL IN DISCONNECTED GRAPHS//
    //->Number of nodes given
    vector<vector<T>> adjList; // when nodes are defiened from 0 to n-1
    int size;
    // Resizing vetor//
    Giraff(int n)
    {
        adjList.resize(n);
        size = n;
    }

    void add_edge(T u, T v, bool isDir = 0)
    {
        adjList[u].push_back(v);
        if (isDir == 0)
            adjList[v].push_back(u);
    }

    void display_graph()
    {
        for (int i = 0; i < size; i++)
        {
            cout << endl;
            cout << i << "->";
            for (auto j : adjList[i])
            {
                cout << j << ",";
            }
        }
    }

    vector<int> getDegBFS(vector<vector<int>> &adjList, int v)
    {
        // need a deg list
        vector<int> deg(v, 0);
        // doing bfs to determine deg
        // need a visit map
        vector<bool> visited(v, false);
        // a queue
        queue<int> Q;
        for (int i = 0; i < v; i++)
        {
            if (!visited[i])
            {
                Q.push(i);
                visited[i] = true;
                while (!Q.empty())
                {
                    int temp = Q.front();
                    Q.pop();
                    for (auto j : adjList[temp])
                    {
                        if (!visited[j])
                        {
                            Q.push(j);
                            visited[j] = true;
                        }
                        deg[j]++;
                    }
                }
            }
        }
        return deg;
    }
    void find_TopoSort_BFS(vector<vector<int>> &adjList, vector<int> &ans, int v)
    {
        // need a visit map
        vector<bool> visited(v, false);
        // need a deg list
        vector<int> deg = getDegBFS(adjList, v);
        // a queue
        queue<int> Q;
        for (int i = 0; i < v; i++)
        {
            if (!visited[i] && deg[i] == 0)
            {
                Q.push(i);
                visited[i] = true;
            }
        }
        while (!Q.empty())
        {
            int temp = Q.front();
            Q.pop();
            ans.push_back(temp);
            for (auto j : adjList[temp])
            {
                deg[j]--;
                if (!visited[j] && deg[j] == 0)
                {
                    Q.push(j);
                    visited[j] = true;
                }
            }
        }
    }

    int detectCycleInDirectedGraph(int n, vector<pair<int, int>> &edges)
    {
        // Write your code here.
        // adj list made
        vector<vector<int>> adjList(n);
        for (auto i : edges)
        {
            adjList[i.first - 1].push_back(i.second - 1);
        }
        // bfs to detect cycle
        // declaring ans to return
        vector<int> ans;
        find_TopoSort_BFS(adjList, ans, n);

        // if TopoSearch exists, the cycle not exixts
        if (ans.size() == n)
            return 0;
        return 1;
    }
};
int main()
{
    cout << "Give the map:";
    cout << "\n Number of nodes: and edges: ";
    int n, m, u, v;
    cin >> n >> m;
    Giraff<int> G1(n);
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        G1.add_edge(u, v);
    }
    G1.display_graph();
}
