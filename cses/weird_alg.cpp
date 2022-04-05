#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;cin>>n;
    // vector<long long> v;
    // v.push_back(n);
     cout<<n<<" ";
    while(n!=1)
    {
        if((n&1)==0)
        n=n/2;
        else
        n=n*3+1;
        if(n==1)
        cout<<n;
        else
        cout<<n<<" ";
        // v.push_back(n);
    }
    // for(int i=0;i<v.size();i++)
    // cout<<v[i]<<" ";
}