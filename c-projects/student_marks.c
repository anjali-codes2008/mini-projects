#include <stdio.h>
void readmarks(int *marks,int size){
    for(int i=0;i<size;i++){
        scanf("%d",&marks[i]);
    }
}
int calculatetotal(int *marks,int size){
    int sum=0,n;
    for(int i=0;i<size;i++){
        sum=sum+marks[i];
    }
    return sum;
}
float findaverage(int *marks,int size){
    float average;
    int sum=0,n;
    for(int i=0;i<size;i++){
        sum=sum+marks[i];
    }
    average=sum/size;
    return average;   
    }
int highestmarks(int *marks,int size){
    int i;
    int highest=marks[0];
    for(int i=0;i<size;i++){
        if(marks[i]>highest){
            highest=marks[i];
        }
    }
    return highest;
}
int lowestmarks(int *marks,int size){
    int i;
    int lowest=marks[0];
    for(int i=0;i<size;i++){
    if(marks[i]<marks[0]){
        lowest=marks[i];
    }
}
return lowest;
}
int main(){
    int n;
    printf("enter how many subjects");
    scanf("%d",&n);
    int marks[n];
    printf("enter the marks of each subject\n");
    readmarks(marks,n);
    printf("sum of total marks=%d\n",calculatetotal(marks,n));
    printf("average of student = %.2f\n",findaverage(marks,n));
    printf("the highest of student =%d\n",highestmarks(marks,n));
    printf("lowest marks of student=%d\n",lowestmarks(marks,n));

}
