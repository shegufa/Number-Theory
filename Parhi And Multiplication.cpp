#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long mod=1000000007;
    //printf("%lld",mod);

    int t,n;
    long long x,ans;
    cin>>t;
    while(t--){
        ans = 1;
        cin>>n;
        while(n--){
            cin>>x;
            x = x%mod;
            ans = (ans*x)%mod;
        }
        cout<<ans;
        printf("\n");
    }

    return 0;
}

