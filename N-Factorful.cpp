
#include<bits/stdc++.h>
using namespace std;


int primeFactor(int n)
{
    int i;
    int k=0;
    if(n%2==0){
        while(n%2==0) n/=2;
        k++;
    }

    for(i=3;i*i<=n;i+=2)
    {
        if(n%i==0){
            while(n%i==0) n/=i;
            k++;
        }
    }
    if(n>2) k++;
    return k;
}

int PFs[11][1000001];
int i,j,h;
int t,a,b,n;
int ans;

void solve(){

    for(j=0;j<=10;j++) PFs[j][0]= 0;
    PFs[0][1] = 1;
    for(j=1;j<=10;j++) PFs[j][1]= 0;

    for(i=2;i<=1000000;i++){
        h = primeFactor(i);

        PFs[h][i] = PFs[h][i-1] + 1;
        for(j=0;j<=10;j++){
            if(j==h) continue;
            PFs[j][i] = PFs[j][i-1];
        }
    }
}
int main()
{
    solve();
    scanf("%d",&t);

    while(t--){
        scanf("%d%d%d",&a,&b,&n);
        ans = PFs[n][b]-PFs[n][a-1];
        printf("%d\n",ans);
    }
    return 0;
}
