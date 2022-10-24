/*
has path
--------
Write a function, hasPath that takes a an object representing adjacency list of directed acyclic graph and two nodes (src, dst). The function should return a boolean representing whether or not there excsits a directed path between the source and the destination nodes.

*/

#include<bits/stdc++.h>

using namespace std;

typedef unordered_map<char, vector<char>> graphStruct;


bool dfs_iterative(graphStruct graph, char src, char dst) {
	stack<char> stack;
	stack.push(src);

	while(stack.size() > 0) {
		char current = stack.top();
		if (current == dst) return true;

		stack.pop();

		for (char child : graph[current]) 
			stack.push(child);
	}

	return false;
}

bool dfs_recursive(graphStruct graph, char src, char dst) {
	if (src == dst) return true;

	for (char child : graph[src]) {
		if(dfs_recursive(graph, child, dst)) return true;
	}

	return false;
}


bool bfs(graphStruct graph, char src, char dst) {
	deque<char> queue;
	queue.push_back(src);

	while(queue.size() > 0) {
		char current = queue.front();
		queue.pop_front();
		if (current == dst) return true;

		for (char child : graph[current])
			queue.push_back(child);
 	}

	return false;
}

bool hasPath(graphStruct graph, char src, char dst) {
	// return dfs_iterative(graph, src, dst);
	// return dfs_recursive(graph, src, dst);

	return bfs(graph, src, dst);
	
}


int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

graphStruct graph;

graph['f'] = {'g', 'i'};
graph['g'] = {'h'};
graph['h'] = {};
graph['i'] = {'g', 'k'};
graph['j'] = {'i'};
graph['k'] = {};

cout << hasPath(graph, 'f', 'k');

return 0;
}

