#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, x=0;
	string s; // statement

	cin>>n;
	while (n--) {
		cin>>s;
		if (s=="++X" || s=="X++") x++;
		else x--;
	}
	cout << x;
}


int main(
){
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;
// cin>>t;
while(t--)
{
	solve();
	cout<<"\n";

}
cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
