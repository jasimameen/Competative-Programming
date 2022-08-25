
#include<bits/stdc++.h>
using namespace std;

string solve(int n)
{	
	if (n%4 == 0 || n%7 == 0) return "YES";


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

int n=1;
cin>>n;

cout<<solve(n);


cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}

