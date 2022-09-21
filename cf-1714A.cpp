#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl

int main()
{
    int t;
    cin>>t;
    
    while(t--) {
         int n, h, s;
         cin>>n>>h>>s;
         int minMinute = INT_MAX;
         
         
         for(int i = 0; i < n; i++) {
             int nh, ns;
             cin>>nh>>ns;
             int mn = 0;
             if(nh > h) {
             int total_min = h * 60 + s;
             int total_min1 = nh * 60 + ns;
             
             mn = total_min1 - total_min;
             
         }
         else if(nh == h) {
               if(ns >= s) {
                   mn = ns - s;
               }
               else
               mn = 24 * 60 - (s - ns);
         }
         else {
               mn = 24 * 60 - (h * 60 + s) + nh * 60 + ns;
               }
         
             minMinute = min(minMinute, mn);
         }
         
         cout<<minMinute / 60 <<" "<<minMinute % 60<<endl;
    }

    return 0;
}