#include<bits/stdc++.h>
using namespace std;
void solve(string str);
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int n;
string s;

cin>>n;

while(n--)
{
	cin >> s;
	solve(s);
	cout<<"\n";
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
void solve(string str)
{
	if (str.size() > 10) 
		cout << str[0] << str.size() - 2 << str[str.size()-1];
	else
		cout << str;
}
