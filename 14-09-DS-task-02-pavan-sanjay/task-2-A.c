#include<stdio.h>
#pragma warning(disable:4996)
//declaration of structure for bank account
struct account {
    int number;
    char name[100];
    int blcamount;
};
//function declarations
void balance(struct  account a[],int size,int n);
void deposit(struct  account a[], int size, int n,int s);
void withdrawal(struct  account a[], int size, int n, int s);
void loop();
int main() {
    /* this was to allow the user to use ou facilities continously without disruption
     * if they choose to us our facilities they press 1 if not then they press 0*/
    int s;
    printf("||WELCOME TO THE BANK||\nIF YOU WOULD LIKE TO USE OUR FACILITIES: press 1\n TO QUIT: press 0 ");
    scanf("%d", &s);
    if (s == 1) {
        loop();
    }
    else
        if (s == 0) {
            printf("have a nice day\n");
            
        }
}
void loop() {
    /*This function is where the main input of details happens.It asks you how many records you want to insert and displays it.keep in mind the maximum space is 10 records*/
    struct account b[10];
    int i, n, choice, j=0;
        printf("enter no of records  to input:");
        scanf("%d", &n);
        for (i = 1; i <= n; i++) {

            printf("Enter Details of Customer %d\n", i);

            printf("Enter Account Number : ");
            scanf("%d", &b[i].number);
            printf("Enter Name : ");
            scanf("%s", b[i].name);
            printf("Enter Balance: ");
            scanf("%d", &b[i].blcamount);


        }
        printf("account details of customers:\n");
        printf("accountnumber \t name \t balanceamount\n ");
        for (i = 1; i <= n; i++) {
            printf("%7d \t %s %7d\n", b[i].number, b[i].name, b[i].blcamount);
        }
        /*this is the switch menu here you have three options to choose from:1-to check the accounts with balance<100
         *2-to deposit money into the bank
         *3-to withdraw money from the bank */
        int s;
        printf("***        pick your choice       ***");
        printf("\n||1 -  accounts with balance < 100||\n|| 2 - to deposit a fixed amount ||\n|| 3 - to withdraw a fixed amount||");
        scanf("%d", &choice);
        switch (choice) {
        case 1:balance(&b[0], 10, n);
            main();
            break;
        case 2:printf("input account no to deposit in:");
            scanf("%d", &s);
            deposit(&b[0], 10, n, s);
            main();
            break;
        case 3:printf("input account no to withdraw from:");
            scanf("%d", &s);
            withdrawal(&b[0], 10, n, s);
            main();
            break;
        }
    

}
void balance(struct account a[],int size, int n) {
    int i, swap = 0;
    /*to check the  account of balance<100*/
    for (i = 1; i <= n; i++) {
        
        if (a[i].blcamount < 100) {
            printf("account details with account balance lesser than 100\n");
            printf("accountnumber \t accountname \tbalanceamount\n");
            printf("%7d \t  %s \t %9d\n", a[i].number, a[i].name, a[i].blcamount);
            
        }
     }
    
   
}
void deposit(struct  account a[], int size, int n, int s) {
    /*to deposit a fixed amount*/
     /*it will print name,account number,updated amount,amount deposited*/
    int i=0, k;
    printf("how much should be deposited?");
    scanf("%d", &k);
    a[s].blcamount += k;
   printf("\nname:%s\n ",a[s].name);
   printf("account number:%d\n", a[s].number);
   printf(" updated amount:%d\n", a[s].blcamount);
   printf("amount deposited:%d\n", k);
 
}
void withdrawal(struct  account a[], int size, int n, int s) {
    /*to withdraw a fixed amount*/
    /*it will print name,account number,updated amount,amount deposited*/
    int i, k;
    if (a[s].blcamount <= 1) {
        printf("transaction is not possible\n");
        printf("account balance of %c is now at %d", a[s].name, a[s].blcamount);
    }
        else
            if (a[s].blcamount > 1) {
                printf("how much to withdraw?");
                    scanf("%d", &k);
                    if (a[s].blcamount >= k) {
                        printf("transaction is happenning\n");
                        a[s].blcamount -= k;
                        printf("\nname:%s\n ", a[s].name);
                        printf("account number:%d\n", a[s].number);
                        printf(" updated amount:%d\n", a[s].blcamount);
                        printf("amount withdrawn:%d\n", k);
                    }
                    else if (a[s].blcamount < k) {
                        printf("the balance is insufficient for specified withdrawl\n");
                    }
         }
    
        
    
}
