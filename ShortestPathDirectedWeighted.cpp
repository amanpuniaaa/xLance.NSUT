/// SHORTEST PATH, OF EACH NODE, FROM A GIVEN NODE
///-> USING WEIGHTD ADJLIST
///->TOPOLOGICAL SORT
///->USE T.S. MINIMIZE DISTANCE
#include <bits/stdc++.h>
using namespace std;

// class tampleting
template <typename T>
class Giraff
{
public:
    // adJList of WEIGHTED graph
    // it has map of NODES to LIST  of PAIR of AdjElements and WEIGHTS
    unordered_map<T, vector<pair<T, T>>> adjList;
    vector<T> nodeList;
    int size;
    Giraff(int n)
    {
        // nodeList = nodes;
        nodeList.resize(n);
        for (int i = 0; i < n; i++)
        {
            nodeList[i] = i;
        }
        size=n;
    }
    void add_edge(T u, T v, T w, bool isDir = 0)
    {
        adjList[u].push_back(make_pair(v, w));
    }

    void display_graph()
    {
        for (auto i : adjList)
        {
            cout << endl;
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << "[" << j.first << "," << j.second << "]; ";
            }
        }
    }

    //step 1: topological sort with dfs

    void dfs(T i, stack<T> &ans, vector<bool> &visited)
    {
        
        visited[i] = true;
        for (auto j : adjList[i])
        {
            if (!visited[j.first])
                dfs(j.first, ans, visited);
        }
        ans.push(i);
    }

    vector<T> TopoSort()
    {
        // ans stack
        stack<T> ans;
        vector<bool> visited(size,false);

        for (auto i : adjList)
        {
            if (visited[i.first]==false)
            { 
                dfs(i.first, ans, visited);
            }
        }
        
        // ret vector
        vector<T> ret;
        while (!ans.empty())
        {
            ret.push_back(ans.top());
            ans.pop();
        }

        return ret;
    }

   //step 2: Now using TopoSort find distance vector
    void distances(int node)
    {
        map<T, int> distance;
        for (auto i : nodeList)
        {
            //step 2.1: setting distance of each node as MAX
            distance[i] = INT_MAX;
        }
        //step 2.2: get and traverse TS
        vector<T> TS = TopoSort();
        for (auto i : TS)
        {
            if (i == node)
            {
                distance[i] = 0;
                for (auto j : adjList[node])
                {
                    distance[j.first] = j.second;
                }
            }
            else if (distance[i] != INT_MAX)
            {
                for (auto j : adjList[i])
                {
                    int newDist = distance[i] + j.second;
                    if (newDist < distance[j.first])
                        distance[j.first] = newDist;
                }
            }
        }

        // Print distance;
        cout << endl
             << "   Distances: " << endl;
        for (auto i : distance)
        {
            cout << i.first << " at distance " << i.second << " from " << node << endl;
        }

    }
};
int main()
{

    cout << "Give the map:";
    //cout << "\n Number of edges: nodes";
    int e = 9, n = 6, u, v, w;
    // cin >> e >> n;

    Giraff<int> G1(n);
    /*for (int i = 0; i < n; i++)
    {
        cin >> u >> v >> w;
        G1.add_edge(u, v, w);
    }*/
    G1.add_edge(1, 3, 6);

    G1.add_edge(1, 2, 2);

    G1.add_edge(0, 1, 5);

    G1.add_edge(0, 2, 3);

    G1.add_edge(3, 4, -1);

    G1.add_edge(2, 4, 4);

    G1.add_edge(2, 5, 2);

    G1.add_edge(2, 3, 7);

    G1.add_edge(4, 5, -2);

    G1.display_graph();
    cout << endl;

    G1.distances(1);
    ///!!Run sucessfully!!
}
