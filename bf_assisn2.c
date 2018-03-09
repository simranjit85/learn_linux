#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int password_match(char *password1){
    int flag=0;
    char password_store[5];
    strcpy(password_store,password1);
     if(strcmp(password1,"1234")==0){
       //printf("Correct password!\n");
        flag=1;
    }
    return flag;
}

int main(int argc, char *argv[])
{
    //int flag=0;
    //char password[5]="1234";
    int money_value=600;
    int choose_value=0;
    int amount_deposited=0;
    int amount_withdrawn=0;
    if(password_match(argv[1])){
        printf("Correct password!\n");
        //flag=1;
    }
    else{
        printf("Invalid user password\n");
        return -1;
    }
    if(password_match(argv[1])){
        while(1){
        printf("------------------\n");
        printf("1: check balance\n");
        printf("2: deposit money\n");
        printf("3: withdraw money\n");
        printf("4: Finished banking\n");

        printf("Please enter a value from above:");
        scanf("%d",&choose_value);
        if(choose_value==1){
            printf("The current account balance is %d\n",money_value);
        }
        if(choose_value==2){
            printf("Enter a deposit money amount:");
            scanf("%d",&amount_deposited);
            money_value=money_value+amount_deposited;
            printf("Current account balance is %d\n",money_value);
        }
        if(choose_value==3){
            printf("Enter a withdrawal money amount:");
            scanf("%d",&amount_withdrawn);
            money_value=money_value-amount_withdrawn;
            printf("Current account balance is %d\n",money_value);
        }
        if(choose_value==4){
            printf("Thank you have nice day\n");
            break;
        }
        }
    }

    return 0;
}
