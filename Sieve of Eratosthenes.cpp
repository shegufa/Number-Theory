//Theory from book "Programming Contest Data structure and Algorithm by Md. Mahbubul Hasan" page 51-54
#include<stdio.h>
#include<math.h>

bool num[10000001];
int prime[1000000];

//used for accessing r-th prime at O(1)
// size of prime array : (1/10)th of n is far more than safe, it's generally approximately n/ln(n)
// can also be known from k with one iteration of soe(n)

int k;
void soe(int n) //1 for non-prime, 0 for prime
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
printf("%d",k);   //number of primes till n

}
int main()
{
    soe(10000001);
    return 0;
}
