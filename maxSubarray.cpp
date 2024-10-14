#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n),ans;
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    for(int i=0;i<k;i++)
    {
        mx=max(mx,a[i]);
        
    }
    ans.push_back(mx);
    for(int i=k;i<n;i++)
    {
       if(a[i]>mx) mx=a[i];
        ans.push_back(mx);
    }
    for(auto i:ans) cout << i << " ";
    cout << endl;
}
