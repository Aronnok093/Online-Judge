#include<stdio.h>
int main(){
    int term,cow,x1,y1,x2,y2,x,y,i,j;
    scanf("%d",&term);
    for(i=0;i<term;i++){
        printf("Case %d:\n",i+1);
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&cow);
        for(j=0;j<cow;j++){

            scanf("%d%d",&x,&y);
            if(x==0||y==0){
                printf("No\n");
            }
            else if((x>x1)&&(y>y1)&&(x<x2)&&(y<y2)){

                printf("Yes\n");
            }
            else{

                printf("No\n");

            }

        }

    }

    return 0;


}
