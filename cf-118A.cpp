// A. String Task

#include<bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);


#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

string s;
cin>>s;
string result;
for(int i=0;i<s.size();i++){
    char ch=tolower(s[i]);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
       continue; 
    cout<<"."<<ch;
}
cout<<result;

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
return 0;
}