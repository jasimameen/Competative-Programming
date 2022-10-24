#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m;
	cin>>n>>m;

	if (n>2 && m > 1 || n>1 && m > 2) {
		if (n == 3 && m==3) {
			cout << 2 << " " << 2;
			return;
		}
		else if (n>3) {

			cout << n-1 << " " << 2;
			return;
		} 
		else if (m>3) {
			cout << 2 << " " << m-1;
			return;
		}
	} 
	 cout << n << " " << m;
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

