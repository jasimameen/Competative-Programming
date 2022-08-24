// A. Helpful Maths
// time limit per test2 seconds
// memory limit per test256 megabytes


// Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

// The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

// You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

// Input
// The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.

// Output
// Print the new sum that Xenia can count.

#include<bits/stdc++.h>
using namespace std;
string solve(string s);
int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

string s;
cin >> s;

string res = solve(s);

cout << res;

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}
string solve(string s)
{
	string res; // result string
	vector<int> vs;

	for (int i=0; i<s.size(); i+=2){
		// int in = ;
		vs.emplace_back((int) s[i]);
	}
	
	sort(vs.begin(), vs.end());

	for (auto x:vs) {
		res += x;
		res += '+';
	}
	
	

	return res;

}
