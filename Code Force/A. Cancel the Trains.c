#include<stdio.h>
#define max 100
int main(){
    int m,n,array_m[max+5],array_n[max+5],i,j,count,term;

    scanf("%d",&term);
    while(term--){

        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++){
            scanf("%d",&array_n[i]);
        }
        for(i=0;i<m;i++){
            scanf("%d",&array_m[i]);
        }
        count=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){

                if(array_n[i]==array_m[j]){
                    count++;
                }

            }
        }
        printf("%d\n",count);

    }
    return 0;
}
