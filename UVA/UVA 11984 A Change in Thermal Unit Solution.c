#include<stdio.h>
int main()
{

    int i,n;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=1; i<=n; i++)
        {
            float c,f,C;
            scanf("%f%f",&c,&f);
            C=((5.0/9.0)*f)+c;
            printf("Case %d: %.2f\n",i,C);

        }


    }

}
