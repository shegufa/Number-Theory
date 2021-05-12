#include<bits/stdc++.h>
using namespace std;


void primeFactor(int n)
{
    int PF[n];
    int i;
    int k=0;
    if(n%2==0){
        while(n%2==0) n/=2;
        PF[k++]=2;
    }

    for(i=3;i*i<=n;i+=2)
    {
        if(n%i==0){
            while(n%i==0) n/=i;
            PF[k++] = i;
        }
    }
    if(n>2) PF[k++]=n;
    for(i=0;i<k;i++)
    {
        cout<<" "<<PF[i];
    }
}

int main()
{
    int i;
    for(i=2;i<=100000;i++)
    {
        printf("%d:",i);
        primeFactor(i);
        printf("\n");
    }

    return 0;
}
