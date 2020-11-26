#include<stdio.h>
int  main(){

    int term,ans,i,count,j,count2=0;
    scanf("%d",&term);
    for(i=0;i<term;i++){
        count=0;
        for(j=0;j<3;j++){
            scanf("%d",&ans);
            if(ans==1){
                count++;
            }
        }
        if(count>1){
            count2++;
        }

    }
      printf("%d\n",count2);
}
