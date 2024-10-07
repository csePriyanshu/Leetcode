#include<bits/stdc++.h>

void dfs(int node, vector <int> &visited, stack<int> &st, vector<int> adj[]){
	visited[node] = 1;
        for(auto it : adj[node])
	{
        	if(!visited[it]) dfs(it, visited, st, adj);
        }
	st.push(node);
}

//Function to return list containing vertices in Topological order.
vector<int> topoSort(int V, vector<int> adj[])
{
	vector<int> visited(V,0);
	stack<int> st;
	for(int i=0; i<V; i++)
	{
		if(!visited[i])
		{
	        	dfs(i, visited, st, adj);
	        }
	}
	vector<int> topSort;
	while(!st.empty())
	{
		topSort.push_back(st.top());
	        st.pop();
	}
	return topSort;
}

int main()
{
	// write code to call topoSort() here...
	return 0;
}
