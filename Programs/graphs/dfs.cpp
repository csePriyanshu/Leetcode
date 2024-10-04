#include<bits/stdc++.h>

using namespace std;

void dfs(vector<int> adj[], int visited[], int node, vector<int> &dfsList)
{
	visited[node] = 1;
	dfsList.push_back(node);
	for(auto it : adj[node])
	{
		if(!visited[it])
		{
			dfs(adj, visited, it, dfsList);
		}
	}
}

int main()
{
	int V = 4;
	vector<int> adj[] = {{1,3}, {2,0}, {1}, {0}};

	vector<int> dfsList;
	int visited[V] = {0};
	dfs(adj, visited, 0, dfsList);
	for(auto elem : dfsList) cout<<elem<<' ';
	cout<<endl;
	return 0;
}
