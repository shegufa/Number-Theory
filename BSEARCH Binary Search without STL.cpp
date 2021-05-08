
#include<bits/stdc++.h>
using namespace std;
int a[100000];

void binary_search(int low,int high,int x)
{
    //printf("%d %d %d",low,high,x);
    int mid;
    int i;
    mid=(ceil)((low+high)/2.0);
    //printf("%d ",a[mid]);

    if(x==a[mid])
    {
        if(a[mid-1]==x)
        {
            high=mid-1;
            binary_search(low,high,x);
        }
        else printf("%d\n",mid);
    }
    else if(x<a[mid] && x>=a[low])
    {
        high=mid-1;
        binary_search(low,high,x);
    }
    else if(x>a[mid]&&x<=a[high])
    {
        low=mid+1;
        binary_search(low,high,x);
    }
    else printf("-1\n");
}

int main()
{
    int n,q,x;
    scanf("%d%d",&n,&q);

    int i,j,low,high;
    low = 0;
    high = n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<q;i++)
    {
        scanf("%d",&x);
        binary_search(low,high,x);

    }

  return 0;
}
