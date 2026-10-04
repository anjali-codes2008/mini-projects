#include<stdio.h>
#define ROWS 5
#define COLUMNS 8
#define MOVIES 3
#define MAX_BOOKINGS 100
#define FOOD_ITEMS 5
char food_names[FOOD_ITEMS][20]={"samosa","egg puff","curry puff","chicken puff","popcorn",};
int food_prices[FOOD_ITEMS]={30,50,40,60,100};
int histroy_movie[MAX_BOOKINGS];
char histroy_row[MAX_BOOKINGS];
int histroy_column[MAX_BOOKINGS];
int histroy_price[MAX_BOOKINGS];
int histroy_count=0;
int seats[5][8];
char movie_names[MOVIES][50]={"avengers endgame","avengers infinity war","avengers dooms day"};
int prices[MOVIES]={300,400,500};
int bookings=0;
char row_input;
int column_output;
void display_menu(){
    printf("\n----MENU-----\n");
    printf("1.book a seat\n");
    printf("2.view seats\n");
    printf("3.booking histroy\n");
    printf("4.report\n");
    printf("5.food menu\n");
    printf("6.Exist\n");
    printf("enter your choice: ");
}
void displayseats(){
    printf("\n0  1  2  3  4  5  6  7  8\n");
    for(int i=0;i<ROWS;i++){
        printf("%c: ",'A'+i);
            for(int j=0;j<COLUMNS;j++){
                if(seats[i][j]==0){       // here i and j means rows and columns intially they are zero (global variable) 0-avaliable 1-not
                printf("⭕ ");
                }
                else{
                    printf("❌ ");
                }
            }
            printf("\n");
    }
}
void food_menu(){
    printf("\n------------------------\n");
    printf("\n------food menu---------\n");
    for(int i=0;i<FOOD_ITEMS;i++){
        printf("%d.%s - Rs.%d\n",i+1,food_names[i],food_prices[i]);

    }
}
int main(){
    int choice,choice2,choice3;
    int food_choice,quantity,food_count;
    int food_total=0;
    int final_amount=0;
    while(1){
    display_menu();
    scanf("%d",&choice);
    switch(choice){
        case 1:
            char more;
            printf("\n-----AVALIABLE MOVIES--------\n");
            for(int i=0;i<MOVIES;i++){
                printf("%d.%s (price:RS.%d)\n",i+1,movie_names[i],prices[i]);
            }
            printf("select the movie: ");
            scanf("%d",&choice2);
            printf("------------------------------------\n");
            printf("------------------------------------\n");
            printf("MOVIES:%s\n",movie_names[choice2-1]);
            printf("PRICE:%d\n",prices[choice2-1]);
            printf("------------------------------------\n");
            printf("------AVALIABLE SEATS------------\n");
            displayseats();
            do{
            printf("how many tickets do you want book:");
            scanf("%d",&choice3);
            int booked_count=0;
            while(booked_count<choice3){
            printf("enter which row(A - E): ");
            scanf(" %c",&row_input);
            printf("enter which cloumn(1 - 8): ");
            scanf("%d",&column_output);
            int row_index=row_input-'A';          //user index-1 our array index - 0
            int column_index=column_output-1;
            
            if(row_index<0||row_index>=ROWS){
                printf("invaild input");
            }
            else if(column_index<0||column_index>=COLUMNS){
                printf("invaild input");
            }
            else{
                if(seats[row_index][column_index]==0){    // intialy row_index and column_index is 0 so this condition true 
                    seats[row_index][column_index]=1;     // then we are assign seat if assign again the condition becomes flase 
                    histroy_movie[histroy_count]=choice2-1;
                    histroy_row[histroy_count]=row_input;
                    histroy_column[histroy_count]=column_output;
                    histroy_price[histroy_count]=prices[choice2-1];
                    histroy_count++;
                    printf("✅ booked!\n");
                    printf("seat:%c%d | movie %s | price: RS./%d\n",row_input,column_output,movie_names[choice2-1],prices[choice2-1]);
                    booked_count++;
                        displayseats();
                }
                    else{
                        printf("❌ already booked! please enter another seat\n");
                        displayseats();
                    }
                }
            }
            printf(" %d tickets booked succesfully\n",choice3);
            printf("do you want to book more tickets (y or n): ");
            scanf(" %c",&more);

            }
            while(more=='y'|| more=='Y');
            break;

        case 2:
            displayseats(); 
            break;
        
        case 3:
            printf("\n-------BOOKING HISTROY---------\n");
            if(histroy_count==0){
                printf("no bookings found.\n");
            }
            else{
                int total_tickets =histroy_count;
                int total_amount=0;
                for(int i=0;i<histroy_count;i++){
                    printf("booking %d\n",i+1);
                    printf("movie: %s\n",movie_names[histroy_movie[i]]);
                    printf("seats: %c%d\n",histroy_row[i],histroy_column[i]);
                    printf("price:RS.%d\n",histroy_price[i]);
                    total_amount=total_amount+histroy_price[i];
                }
                printf("Total tickets: %d\n",total_tickets);
                printf("total amount:%d\n",total_amount);
            }
            break;

            case 4:
            int total_amount=0;
            for(int i=0;i<histroy_count;i++){
                total_amount=total_amount+histroy_price[i];
            }
            printf("\n-------REPORT---------\n");
            printf("total tickets booked:%d\n",histroy_count);
            printf("total amount collection:Rs. %d\n",total_amount);
            break;

            case 5:
            food_menu();
            printf("how many different food items do you want: ");
            scanf("%d",&food_count);
            for(int i=0;i<food_count;i++){
                printf("enter your food choice: ");
                scanf("%d",&food_choice);
                printf("enter your quantity:");
                scanf("%d",&quantity);
                food_total=food_total+food_prices[food_choice-1]*quantity;
                printf("total food amount:Rs.%d\n",food_total);   
            }
            printf("\n=====================================\n");
            total_amount=0;
            for(int i=0;i<histroy_count;i++){
            total_amount=total_amount+histroy_price[i];
    }
             printf("ticket amount: Rs.%d\n",total_amount);
            printf("food amount: Rs.%d\n",food_total);
            final_amount=total_amount+food_total;
            printf("final amount = Rs.%d\n",final_amount);
            break;

            case 6:
            printf("Thank you for using our booking system!\n");
            return 0;


}
}
}


            



    



