#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {int n,p,arr[100],i,y;
        scanf("%d",&n);
        p=1;
        for(i=0;i<n;i++)
        {
            arr[i]=p++;
        }
        if(n%2==0)
        {for(i=0;i<n-1;i=i+2)
            {
            printf("%d ",arr[i+1]);
        printf("%d ",arr[i]);}
        if(n%2!=0)
        printf("%d ",arr[i]);
            printf("\n");
    }
    else
    {
        y=arr[0];
        arr[0]=arr[n-1];
        arr[n-1]=y;
        for(i=0;i<n-1;i=i+2)
            {
            printf("%d ",arr[i+1]);
        printf("%d ",arr[i]);}
        if(n%2!=0)
        printf("%d ",arr[i]);
            printf("\n");
    }}

    return 0;
}
