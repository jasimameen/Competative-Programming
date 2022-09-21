
#include<bits/stdc++.h>

using namespace std;

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1, ts;
cin>>t;
while(t--)
{
	int n, ans=0;
	cin>>n;
	int h[n], a[n];

	for (int i=0; i<n; i++) cin>>h[i]>>a[i];

	for (int i=0; i<n; i++) 
		for (int j=0; j<i; j++) {
			if (h[i] == a [j]) ans++;
			if (a[i] == h[j]) ans++;
		}

	cout << ans << '\n';
}

cerr<<"time taken : "<<(float)clock()/(CLOCKS_PER_SEC/(float)1000)<<" ms"<<endl;
return 0;
}

