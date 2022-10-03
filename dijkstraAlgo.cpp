/// SHORTEST PATH, OF EACH NODE, FROM A GIVEN NODE  *IN UNDIRECTED GRAPH*
///-> USING WEIGHTD ADJLIST
///->BFS like treversal
///->Minimize the distance
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
    int size;
    Giraff(int n)
    {
        size = n;
    }
    void add_edge(T u, T v, T w)
    {
        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w));
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

    /////////////The Dijkstra/////////////
    vector<int> dijkstra(int source)
    {

        // step 1: Neet a SET of pair,Dist Vector
        set<pair<int, int>> Q;
        vector<int> distance(size, INT_MAX);
        // step 2: start with the given node
        distance[source] = 0;
        Q.insert(make_pair(0, source));
        while (!Q.empty())
        {

            // get and earase temp(front)
            pair<int, int> temp = *(Q.begin());
            Q.erase(Q.begin());

            int currentNode = temp.second;
            int currentDistance = temp.first;
            for (auto i : adjList[currentNode])
            {
                int t = (currentDistance + i.second);
                if (t < distance[i.first])
                {
                    //check and rease previous pair if it exists
                    auto rec = Q.find(make_pair(distance[i.first], i.first));
                    if (rec != Q.end())
                        Q.erase(rec);

                    distance[i.first] = t;
                    Q.insert(make_pair(t, i.first));
                }
            }
        }

        //printing distances
        cout << endl;
        for (auto i : distance)
        {
            cout << i << " ";
        }
        return distance;
    }
};
int main()
{

    cout << "Give the map:";
    // cout << "\n Number of edges: nodes";
    int e = 19, n = 5, u, v, w;
    // cin >> e >> n;

    Giraff<int> G1(n);
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v >> w;
        G1.add_edge(u, v, w);
    }

    G1.display_graph();
    cout << endl;

    G1.dijkstra(0);
    ///!!Run sucessfully!!
    char a;
    cin>>a;
}
