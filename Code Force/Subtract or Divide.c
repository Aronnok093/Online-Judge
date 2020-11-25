#include<stdio.h>
int main(){
    unsigned long long int term,num,i;
    scanf("%llu",&term);
    for(i=0;i<term;i++){
        scanf("%llu",&num);
        if(num==1){
            printf("0\n");
        }
        else if(num==2){
            printf("1\n");
        }
        else if(num==3){
            printf("2\n");
        }
        else{
            if(num%2==0){
                printf("2\n");
            }
            else
            {
                printf("3\n");
            }
        }
    }
    return 0;

}
