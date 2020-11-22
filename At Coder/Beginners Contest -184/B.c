#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,x=0,y=0;
    scanf("%d%d",&a,&b);
    getchar();
    char str[a];
    scanf("%s",str);
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]=='o')
            b++;
        else if(b>0 && str[i]=='x')
            b--;
    }
    printf("%d\n",b);
}
