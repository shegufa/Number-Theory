#include<stdio.h>
#include<math.h>
#include<vector>

using namespace std;

int k =1;
bool num[86028121]={0};
int prime[5000000]={0};

void soe(int n)
{
        k=1;
        int i,j,limit=sqrt(n*1.)+2;
        num[1]=1;
        num[2]=0;
        prime[k++]=2;
        for(i=4;i<=n;i+=2) num[i] = 1; //4 to n , even cancel.
        for(i=3;i<=n;i+=2)
        {
          if(num[i]==0)
           {
               prime[k++]=i;
               if(i<=limit)
               {
                   for(j=i*i;j<=n;j+=i*2)
                   {
                       num[j]=1;
                   }
               }

           }

        }
        //printf("%d",k);

}

int main()
{
    int n = 86028121;  // I just had this written that for this n, you will find 5000000 primes.
                       // You can just assume 20 times of 5000000 or use n/ln(n) to know for which n, n/ln(n) is equal to 5000000.
                       //It should give an approximate idea.
                       // Or, you can use the commented line with soe() function to print k
                       // call the soe function for different values of n to find out which n gives 5000000 or more for k. Get a safe value of n from there. Thank you.

    soe(n);
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        printf("%d\n",prime[x]);
    }

    return 0;
}
