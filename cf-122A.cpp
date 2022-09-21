
#include<bits/stdc++.h>
using namespace std;

string solve(int n)
{	
	
	if (n%4==0||n%7==0||
		n%44==0||n%47==0||n%74==0||n%77==0||
		n%444==0||n%447==0||n%74==0||n%477==0||n%744==0||n%747==0||n%774==0||n%777==0) 
		return "YES";
	
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

