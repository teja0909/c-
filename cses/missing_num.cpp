#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,x,s=0;cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        s+=x;
    }
    cout<<((n*(n+1))/2)-s;

}
