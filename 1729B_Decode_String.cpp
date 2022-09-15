#include<bits/stdc++.h>

using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

void solve() {
	int n;
	string t, ans;
	cin>>n>>t;
	for (int i=n-1; i>=0; i--) {
		int val = t[i] - '0' ;
		if (val<10 && val!=0) ans += char(val+96);
		else if (val==0) {
			int val2 = t[i-1] - '0';
			int val3 = t[i-2] - '0';
			int e = val2+(val3*10);
			ans += char(e+96);
			i-=2;
		}

	}
reverseStr(ans);
cout << ans;
}


int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int q;
	cin>>q;
	while(q--) 
	{
		solve();
		cout<<"\n";
	}

	return 0;
}

