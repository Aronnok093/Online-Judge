#include <stdio.h>
int main()
{
    int tst, k;
    scanf("%d", &tst);
    for(k=1; k<=tst; k++)
    {
        int max = 0, min = 900000000, i, tst_2, l, w, h;
        scanf("%d", &tst_2);
        char name[tst_2][100];
        int ara[tst_2], loc_2, loc_1;
        for(i=0; i<tst_2; i++)
        {
            scanf("%s", name[i]);
            scanf("%d%d%d", &l, &w, &h);
            ara[i] = l*w*h;
            if(ara[i]<min)
            {
                min = ara[i];
                loc_1 = i;
            }
            if(ara[i]>max)
            {
                max = ara[i];
                loc_2 = i;
            }
        }
        if(min == max) printf("Case %d: no thief\n", k);
        else printf("Case %d: %s took chocolate from %s\n",k, name[loc_2], name[loc_1]);
    }
    return 0;
}
