#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pi acos(-1)

#define sc(n) scanf("%I64d",&n)
#define sc2(a,b) scanf("%I64d%I64d",&a,&b)
#define loop(a,b) for(ll i=a;i<=b;i++)


#define newline printf("\n")
#define print(n) printf("%I64d",n)

int BigMod(int a, int b, int m)
{
    int x;
    if(b==0) return 1%m;
    x = BigMod(a,b/2,m);
    x = (x*x)%m;
    if(b%2==1) x = (x*(a%m))%m;
    return x;
}
int main()
{

    int a,b,m;
    while(cin>>a>>b>>m)
    {
        printf("%d\n",BigMod(a,b,m));
    }

    return 0;
}
