#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pi acos(-1)
#define newline printf("\n")

#define sc(n) scanf("%I64d",&n)
#define sc2(a,b) scanf("%I64d%I64d",&a,&b)
#define loop(a,b) for(ll i=a;i<=b;i++)

#define pr(n) printf("%I64d",n)

int main()
{
    ll t;
    sc(t);

    ll a,r,n;
    ll term,ans;

    ll m =1000003;
    while(t--){
        sc(a);
        sc(r);
        sc(n);
        term = a;
        ans = a;
        //r^n modulo m
        for(ll i=2;i<=n;i++){
           term = (term*r)%m;
           ans =  (ans+term)%m;
        }

        printf("%lld",ans);
        newline;
    }
    return 0;
}
