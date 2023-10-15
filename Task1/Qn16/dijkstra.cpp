#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dijkstra(int ver, vector<vector<int>> adj[], int sor)
    {
        set<pair<int, int>> st;
        vector<int> dist(ver, INT_MAX);
        st.insert({0, sor});
        dist[sor] = 0;

        while (!st.empty())
        {
            auto it = *(st.begin());
            int node = it.second;
            int dis = it.first;
            st.erase(it);

            for (auto it : adj[node])
            {
                int adjNode = it[0];
                int edgW = it[1];

                if (dis + edgW < dist[adjNode])
                {
                    if (dist[adjNode] != INT_MAX)
                        st.erase({dist[adjNode], adjNode});
                    dist[adjNode] = dis + edgW;
                    st.insert({dist[adjNode], adjNode});
                }
            }
        }

        return dist;
    }
};

int main()
{
    int ver, ed, sor;
    cout << "Enter the number of vertices: ";
    cin >> ver;
    cout << "Enter the number of edges: ";
    cin >> ed;
    cout << "Enter the source vertex: ";
    cin >> sor;

    vector<vector<int>> adj[ver];
    vector<vector<int>> edges;

    for (int i = 0; i < ed; i++)
    {
        int u, v, w;
        cout << "Enter edge " << i + 1 << " (u v w): ";
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    Solution obj;
    vector<int> res = obj.dijkstra(ver, adj, sor);

    cout << "Shortest distances from source " << sor << " to all nodes:\n";
    for (int i = 0; i < ver; i++)
    {
        cout << "Node " << i << ": " << res[i] << " ";
    }
    cout << endl;
    return 0;
}
