#include<stdio.h>
#include<math.h>

bool num[10000001]={0};
int prime[1000000],k=1;
void soe(int n)
{
        k=1;
        int i,j,limit = sqrt(n*1.)+2;
        num[1] = 1;
        num[2] = 0;
        prime[k++] = 2;
        for(i=4;i<=n;i+=2) num[i] = 1; //4 to n , even cancel.
        for(i=3;i<=n;i+=2)
        {
            if(num[i]==0)
           {
               prime[k++] = i;
               if(i<=limit)
               {
                   for(j=i*i;j<=n;j+=i*2)
                   {
                       num[j]=1;
                   }
               }

           }

        }


}

int gc(int n)
{
    int c=0,i;

    for(i=1;prime[i]<=n/2;i++)
    {
        if(num[n-prime[i]]==0) c++;
    }

    return c;
}

int main()
{
    int t,n,i,r;
    scanf("%d",&t);
    n = 10000000;
    soe(n);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);//n is even according to the question
        r = gc(n);
        printf("Case %d: %d\n",i,r);
    }

    return 0;
}



