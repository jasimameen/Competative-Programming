#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;

	bool yes = false;
	int inp;
	for (int i=0; i<n; i++) {
		cin >> inp;
		if (inp == 1) yes = true;
	}

	yes ? cout << "YES" : cout << "NO";
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

	