#include <stdio.h>
int main(){
    int n,n1,choice;
    printf(" 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("enter how many numbers:");
            scanf("%d",&n1);
            int sum;
            for(int i=0;i<n1;i++){
                printf("enter the number:");
                scanf("%d",&n);
                sum=sum+n;
            }
            printf("the addition of two numbers:%d\n",sum);
            break;
        case 2:
            printf("enter how many numbers:");
            scanf("%d",&n1);
            printf("enter the first number:");
            scanf("%d",&n);
            int sub=n;
            for(int i=1;i<n1;i++){
                printf("enter the next number:");
                scanf("%d",&n);
                sub=sub-n;
            }
            printf("the subtaction of numbers:%d\n",sub);
            break;
        case 3:
            printf("enter how many numbers:");
            scanf("%d",&n1);
            int mul=1;
            for(int i=1;i<=n1;i++){
                printf("enter the next number:");
                scanf("%d",&n);
                mul=mul*n;
            }
            printf("the multiplication of numbers:%d\n",mul);
            break;
        case 4:
            printf("enter how many numbers:");
            scanf("%d",&n1);
            printf("enter the first number:");
            scanf("%d",&n);
            float div=n;
            for(int i=0;i<n1;i++){
                printf("enter the next number:");
                scanf("%d",&n);
                if(n!=0){
                div=div/n;
                }
                else{
                    printf("cannot divisible by zero");
                }
            }
            printf("the division of numbers:%.2f\n",div);
            break;
        default:
            printf("invaild input! please try again");
            
    }
    return 0;
}
