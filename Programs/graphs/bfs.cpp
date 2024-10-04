#include<bits/stdc++.h>

using namespace std;

int main()
{
	//assume that no of nodes & adjacency list is given for a graph
	int V = 8;
	vector<int> adj[] = {{1,5},{0,2,3},{1},{1,4},{3,6},{0,6,7},{4,5},{5}};
	/*
		0
	       / \
	      /   \
	     1     5
	    / \    /\
	    2  3  6  7
	        \ /
	         4
	*/
	// BFS algo start here
	int visited[V] = {0};
	vector<int> bfs;
	queue<int> q;
	q.push(0);  //starting node
	visited[0] = 1;
	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		bfs.push_back(node);
		for(auto it : adj[node])
		{
			if(!visited[it])
			{
				q.push(it);
				visited[it] = 1;
			}
		}
	}
	// we have the required bfs traversal
	for(auto elem : bfs) cout<<elem<<' ';
	cout<<endl;
	return 0;
}
