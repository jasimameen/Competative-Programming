#include<bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c;
	cin>>a>>b>>c;

	int da = abs(1-a);
	int db;

	if (abs(1-b) > abs(1-c)) db = abs(1-c) + abs(b-c);
	else db = abs(1-b) + abs(b-c)*2;


	if (da<db) cout << 1;
	else if (da>db) cout << 2;
	else cout << 3;

}


int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int t;
cin>>t;
while(t--) 
{
	solve();
	cout<<"\n";
}

return 0;
}

