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

int n, f;
cin >> n;
int arr[n+1];

for (int i=1; i<n; i++) {
	cin>>f;
	arr[f] = i;
}

for (int i=i; i<n; i++) {
	cout << arr[i] << " ";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

