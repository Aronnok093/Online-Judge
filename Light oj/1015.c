#include<stdio.h>
int main(){
    int term,dust,i,studentNum,j,sum;
    scanf("%d",&term);
    for(i=0;i<term;i++){
        sum=0;
        scanf("%d",&studentNum);
        for(j=0;j<studentNum;j++){

            scanf("%d",&dust);
            if(dust<0)
                continue;
            else{
                sum=sum+dust;
            }



        }
        printf("Case %d: %d\n",i+1,sum);

    }


}
