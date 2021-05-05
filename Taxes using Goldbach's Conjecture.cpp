
#include<stdio.h>

int isPrime(int n)
{
    int i;
    for(i = 2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;//not prime
    }
    return 1;//prime
}
int main()
{
    long long int n;
    int ans;
    scanf("%lld",&n);
    if(isPrime(n)==1) ans=1;
    else
        {
            if(n%2==0)
            {
                ans= 2;
            }
            else //odd
            {
               if(isPrime(n-2)==1) ans = 2;
               else ans=3;
            }
        }

    printf("%d\n",ans);
    return 0;
}
