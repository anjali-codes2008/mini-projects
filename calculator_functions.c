#include <stdio.h>
int addition(int count,int first_num){
    int n,sum=first_num;
    for(int i=1;i<count;i++){
        printf("enter the next number:");
        scanf("%d",&n);
        sum=sum+n;
    }
    return sum;
}
int subtraction(int count,int first_num){
    int n, sub=first_num;
    for(int i=1;i<count;i++){
        printf("enter the next number:");
        scanf("%d",&n);
        sub=sub-n;
    }
    return sub;
}
int multiplication(int count,int first_num){
    int n,mul=first_num;
    for(int i=1;i<count;i++){
        printf("enter the number:");
        scanf("%d",&n);
        mul=mul*n;
    }
    return mul;
}
float division(int count,int first_num){
    int n;
    float div=first_num;
    for(int i=1;i<count;i++){
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0){
        printf("zero cannot divisible");
        continue;
    }
    div=div/n;  
}
    return div;
}

int main(){
    int choice;
    int count,first_num;
    float histroy[100];
    int histroy_count=0;
    do{
    printf(" 1.addition\n 2.subtraction\n 3.multiplication\n 4.divison\n 5.calculation histroy\n 6.exsting calculator\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("enter how many elements:");
        scanf("%d",&count);
        printf("enter the first number:");
        scanf("%d",&first_num);
        int result=addition(count,first_num);
        printf("result=%d\n",result);
        histroy[histroy_count]=result;
        histroy_count=histroy_count+1;
        break;

        case 2:
        printf("enter how many elements:");
        scanf("%d",&count);
        printf("enter the first number:");
        scanf("%d",&first_num);
        result = subtraction(count,first_num);
        printf("%d\n",result);
        histroy[histroy_count]=result;
        histroy_count=histroy_count+1;
        break;

        case 3:
        printf("enter how many elements:");
        scanf("%d",&count);
        printf("enter the first number:");
        scanf("%d",&first_num);
        result = multiplication(count,first_num);
        printf("%d\n",result);
        histroy[histroy_count]=result;
        histroy_count=histroy_count+1;
        
        break;

        case 4:
        printf("enter how many elements:");
        scanf("%d",&count);
        printf("enter the first number:");
        scanf("%d",&first_num);
        result = division(count,first_num);
        printf("%d\n",result);
        histroy[histroy_count]=result;
        histroy_count=histroy_count+1;
        break;

        case 5:
        for(int i=0;i<histroy_count;i++){
            printf("histroy %d =%.2f\n",i+1,histroy[i]);
        }
        break;

        case 6:
            printf("exsting calculator.....\n");
            break;
    }
    
}
while(choice!=6);
return 0;
}
    
    
    
    