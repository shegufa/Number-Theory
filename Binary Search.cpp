#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll a[100001];
int main()
{
    ll n,q;
    scanf("%lld%lld",&n,&q);

    for(ll i=0;i<n;i++) scanf("%lld",&a[i]);

    ll x,ans;
    while(q--){
        scanf("%lld",&x);

        ans = binary_search(a,a+n,x);

        if(ans==0) printf("-1\n");
        else{
            ans = lower_bound(a,a+n,x) - a;
            printf("%lld",ans);
        }
        printf("\n");
    }
    return 0;
}


