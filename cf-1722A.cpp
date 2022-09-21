#include<bits/stdc++.h>

using namespace std;

string solve(int n, string s){
	unordered_map<char, bool> mp;
	mp['T'] = false;
	mp['i'] = false;
	mp['m'] = false;
	mp['u'] = false;
	mp['r'] = false;
	if (n==5) {
		for (char c:s) {

			 if (mp.find(c) == mp.end() || mp[c]==true) return "NO";
			else if (mp.find(c) != mp.end() && mp[c] == false) mp[c]=true;
		}
			return "YES";
	}
	return "NO";
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
	string s;
	cin>>n>>s;
	cout << solve(n, s) << "\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

