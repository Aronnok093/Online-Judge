#include<stdio.h>
#include<stdlib.h>
int main(){
    int term,array[50]={0},problem,temp;
    scanf("%d",&term);
    int i;
    for(i=0;i<term;i++){
        scanf("%d",&problem);
        if(problem==0){

            printf("0 0\n");
        }
        else if(problem==20){

            printf("10 10\n");
        }
        else if(problem<=10){

            printf("%d %d\n",array[problem],abs(problem-array[problem]));// i:n-i where i=0,1,-----
            array[problem]=array[problem]+1;
        }
        else{
                temp=10-array[problem];
                printf("%d %d\n",temp,abs(temp-problem));
                array[problem]=array[problem]+1;

        }
    }
    return 0;

}
