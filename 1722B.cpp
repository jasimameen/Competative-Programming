#include<bits/stdc++.h>

using namespace std;

string solve(int n, string s1, string s2) {
	while (n--) {
		if (s1[n]==s2[n] || s1[n]=='G' && s2[n] == 'B' || s1[n]=='B' && s2[n] == 'G') continue;
		else return "NO";
	}
	return "YES";
}


int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;
cin>>t;
while(t--)
{
	int n;
	string s1, s2;
	cin>>n>>s1>>s2;

	cout<<solve(n, s1, s2)<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

