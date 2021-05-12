
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pi acos(-1)
#define newline printf("\n")

#define sc(n) scanf("%I64d",&n)
#define sc2(a,b) scanf("%I64d%I64d",&a,&b)
#define loop(a,b) for(ll i=a;i<=b;i++)


int main()
{
    int n;
    cin>>n;
    ll a[n];

    loop(0,n-1) cin>>a[i];
    loop(1,n-1){
        a[i] = a[i]+a[i-1];
    }
    int q;
    cin>>q;
    int l,u;
    ll ans;
    while(q--){
        cin>>l>>u;
        if(l==0) ans = a[u];
        else ans = a[u]-a[l-1];
        cout<<ans;
        newline;
    }
    return 0;
}

