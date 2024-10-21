#include <bits/stdc++.h>
using namespace std;
bool isPallindrome(string s)
{
    string s1 = s;
    reverse(s1.begin(),s1.end());
    return (s1==s);
}
int countPallindromeShifts(string s)
{
    int left=0,right=0;
    int ans = 0;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        s=s.substr(1)+s[0];
        if(isPallindrome(s))
        {
            left++;
            break;
        }
    }
    s=s.substr(n-1)+s.substr(0,n-1);
    for(int i=0;i<n;i++)
    {
        s=s[n-1]+s.substr(0,n-1);
        if(isPallindrome(s)) 
        {
            right++;
            break;
        }
    }
    ans=min(left,right);
    if(ans==0) return -1;
    return ans;
}
int main() 
{
    string s;
    cin>>s;
    if(isPallindrome(s))
    {
        cout << 0 << endl;
    }
    else
    {
        int result = countPallindromeShifts(s);
        cout << result << endl;
    }
}
