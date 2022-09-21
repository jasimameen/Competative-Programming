#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, k, couter=0;
	cin>>n>>k;
	long long a[n];
	unordered_map<int, int> mp;
	sum = 0;

	for (int i=0; i<n; i++) { 
		cin>>a[i];
		if (couter!=k) {
			couter++;
			sum+=a[i];
		} else {
			couter = 0;
		}

	}


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

