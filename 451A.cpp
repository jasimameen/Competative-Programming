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
	
	int n,m, temp;
	cin>>n>>m;
	temp = min(n,m);
	if (temp%2==0) cout << "Malvika";
	else cout << "Akshat";
	


cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

