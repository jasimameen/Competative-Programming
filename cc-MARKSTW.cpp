#include<bits/stdc++.h>

using namespace std;

void solve() {
	int x, y;
	cin>>x>>y;

	if (x>2*y) {
		cout << "Yes";
	} else cout << "No";
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

