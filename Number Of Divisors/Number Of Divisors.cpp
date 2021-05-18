#include<bits/stdc++.h>
using namespace std;


int NumberOfDivisors(long long int n)
{
    int i;
    int m=1;

    int c=0;
    if(n%2==0)
    {
        while(n%2==0)
            {
                c++;
               n = n/2;
            }
    c=c+1;
    m=m*c;
    }


    for(i=3;i<=sqrt(n);i+=2)
    {
        c=0;
        if(n%i==0)
            {
                while(n%i==0)
                    {
                        c++;
                        n=n/i;
                    }
                    c=c+1;
                    m=m*c;

        }

    }
    if(n>2) //prime itself
    {
        m=m*2; // or we can also just write m=2;
    }

    return m;

}

int main()
{
    int T,i,j,c;
    long long int n;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        scanf("%lld",&n);
        c = NumberOfDivisors(n);
        printf("%d\n",c);
    }

    return 0;

}

