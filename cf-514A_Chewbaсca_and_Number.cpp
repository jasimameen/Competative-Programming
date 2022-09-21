#include<bits/stdc++.h>

using namespace std;

void solve() {
	string s;
	cin>>s;

	int first = s[0] - '0';
	if (first != 9 && first > 4) s[0] = (9-first) + '0';

	for (int i=1; i<s.size(); i++) {
		int c = s[i] - '0';
		if (c>4) s[i] = (9-c) + '0';
	}
	cout << s;
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

solve();

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

