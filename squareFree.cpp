#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    set<int>s;
    int fac1=0,fac2=0;
    for(int i=2;i*i<=n;i++)
    {
        cout << i << endl;
        if(n%i==0)
        {
            int d = sqrt(i);
            if(d*d!=i) s.insert(i);
            int e = sqrt(n/i);
            if(e*e!=n/i) s.insert(n/i);
             
        }
    }
    for(auto i:s) cout << i << " ";
    cout << endl;
}
