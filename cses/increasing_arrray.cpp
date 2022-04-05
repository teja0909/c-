#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;
#define f(i,a,b) for(int i=a;i<b;i++)
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,x,s=0;cin>>n;
    ll a[n];
    cin>>a[0];
    f(i ,1,n)
    {
        cin>>a[i];
        if(a[i-1]>=a[i])
        {
            x=a[i-1]-a[i];
            a[i]+=x;
            s+=x;
        }

     }
     cout<<s<<" ";

}
