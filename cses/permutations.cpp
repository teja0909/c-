#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;
#define f(i,a,b) for(int i=a;i<b;i++)
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;cin>>n;
    if(n>=2 and n<=3) cout<<"NO SOLUTION";
    else
    {
    for(ll i=2;i<=n;i+=2)cout<<i<<" ";
    for(ll i=1;i<=n;i+=2)cout<<i<<" ";
    }
}
