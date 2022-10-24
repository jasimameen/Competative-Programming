#include<bits/stdc++.h>

using namespace std;
typedef unordered_map<int, vector<int>> graph;

unordered_set<int> visited;

void traverse(graph& adj,int src) {
	for (int neighbor : adj[src]) {
		if (visited.find(neighbor) != visited.end()) continue;

		visited.insert(neighbor);
		traverse(adj, neighbor);
	}
}

int count_components(graph& adj) {
	int count = 0;	

	for (auto node : adj) {
		if (visited.find(node.first) != visited.end()) continue;

		traverse(adj, node.first);
		count++;
	}

	return count;
}


int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

graph adj = {
	{3 , {}},
	{4 , {6}},
	{6 , {4, 5, 7, 8}},
	{8 , {6}},
	{7 , {6}},
	{5 , {6}},
	{1 , {2}},
	{2 , {1}},
};

cout << "No of Components: " << count_components(adj);

return 0;
}

