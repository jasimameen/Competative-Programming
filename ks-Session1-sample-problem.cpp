#include<bits/stdc++.h>

using namespace std;

int solve() {
	int n, m, total=0, temp;
	cin>>n>>m;

	while (n--) {
		cin>>temp;
		total+=temp;	
	}

	return total%m;
	
}


int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int t, ts=1;
cin>>t;
while(t--) 
{
	cout<<"Case #" << ts << ": " << solve() <<"\n";
	ts++;
}

return 0;
}

