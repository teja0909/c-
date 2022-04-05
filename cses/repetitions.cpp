#include<bits/stdc++.h>
using namespace  std;
typedef long long ll;
#define f(i,a,b) for(int i=a;i<b;i++)
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    char n,c;
    // n=getchar_unlocked();
    n=_getchar_nolock();
    c=n;
    ll best=0,max=1;
    while(n!='\n')
    {
    //    n=getchar_unlocked();
        n=_getchar_nolock();
       if(c==n) max++;
       else
       {
           best=(best<max)?max:best;
           max=1;
       }
       c=n;
    }
    best=(best<max)?max:best;
    cout<<best;
}
