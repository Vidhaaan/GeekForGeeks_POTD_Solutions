// Problem: Topological sort
// Date: 1st June
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void dfs(int start, vector<bool> &vis, stack<int> &s, vector<int> adj[])
    {
        vis[start] = 1;

        for (int nbr : adj[start])
        {
            if (!vis[nbr])
            {
                dfs(nbr, vis, s, adj);
            }
        }

        s.push(start);
    }
    // Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[])
    {
        vector<bool> vis(V);
        stack<int> s;
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, vis, s, adj);
            }
        }
        vector<int> res;
        for (int i = 0; i < V; i++)
        {
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
};

int check(int V, vector<int> &res, vector<int> adj[])
{

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++)
    {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++)
    {
        for (int v : adj[i])
        {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }

    return 0;
}
