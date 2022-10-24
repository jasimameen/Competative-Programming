#include<bits/stdc++.h>

using namespace std;
typedef unordered_map<int, vector<int>> graph;

unordered_set<int> visited;

int component_count(graph& adj, int src) {
	if (visited.find(src) != visited.end()) return 0;

	visited.insert(src);
	int count = 1;

	for (int neighbor : adj[src])
		count += component_count(adj, neighbor);
	
	return count;
}

int largest_component(graph& adj) {
	int largest = 0;

	for (auto node : adj) {
		int count = component_count(adj, node.first);
		largest = max(count, largest);
	}

	return largest;
}


int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

 graph adj = {
	{0, {8, 1, 5}},
	{1, {0}},
	{5, {0, 8}},
	{8, {0, 5}},
	{2, {3, 4}},
	{3, {2, 4}},
	{4, {3, 2}}
};

cout << "Largest Component count: " << largest_component(adj);

return 0;
}

