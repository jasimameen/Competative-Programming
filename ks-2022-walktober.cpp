#include<bits/stdc++.h>

using namespace std;

int solve() {
	int m, n, p;
    // m - no of participants
    // n - no of days
    // p - last year ID of john
	cin >> m >> n >> p;

	vector<vector<int>> arr;
	
	for (int i=0; i<m; i++) {
		vector<int> temp;
		for (int j=0; j<n; j++) {
			int inp;
			cin >> inp;
			temp.push_back(inp);
		}
		arr.push_back(temp);
	}
	
	int ans = 0;
	while (n--) {
		int maxVal = 0;
		int minVal = 60001;
		for (int i=0; i < arr.size(); i++) {
			maxVal = max(maxVal, arr[i][p]);
			minVal = min(minVal, arr[i][p]);
		}
		ans += (maxVal - minVal);
	}

	return ans;
}


int main() {
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

int t, ts=1;
cin>>t;
while(t--) 
{
	cout<<"Case #" << ts << ": " << solve() <<"\n";
	ts++;
}

return 0;
}

