// A. Petya and Strings
// Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

// Input
// Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

// Output
// If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

#include<bits/stdc++.h>
using namespace std;
int solve(string s1, string s2);
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

string s1, s2;
cin>>s1;
cin >> s2;

transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

int res = solve(s1, s2);

cout << res;

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
int solve(string s1, string s2)
{
	if (s1 == s2) return 0;

	int i = 0;
	while (i < s1.size()) {
		if (s1[i] == s2[i]) {
			i++;
			continue;
		}
		if (s1[i] < s2[i]) return -1;
		else return 1;
	}

}
