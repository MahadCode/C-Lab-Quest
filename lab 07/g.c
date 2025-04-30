#include<stdio.h>

int main(){
    int numSodas;
    printf("For Admin, Enter amount of Soda:\n");
    scanf("%d", &numSodas);
    float priceofSoda;
    printf("For Admin, Enter price of Soda:\n");
    scanf("%f", &priceofSoda);
    int numSnacks;
    printf("For Admin, Enter amount of Snack:\n");
    scanf("%d", &numSnacks);
    float priceofSnacks;
    printf("For Admin, Enter price of Snack:\n");
    scanf("%f", &priceofSnacks);
    int numCandies;
    printf("For Admin, Enter amount of Candies:\n");
    scanf("%d", &numCandies);
    float priceofCandy;
    printf("For Admin, Enter price of Candy:\n");
    scanf("%f", &priceofCandy);

    if(numSodas>=0 && priceofSoda>=0 && numSnacks>=0 && priceofSnacks>=0 && numCandies>=0 && priceofCandy>=0){

    float Balance;
    printf("User! Enter your Balance.(Non-positive Balance to End)\n");
    scanf("%f", &Balance);

    float rem=Balance;
   
    
    int check=1;
   
    do {
    
    
    if(rem>0){
    printf("Current Balance %f\n", rem);
    printf("Quantity of Sodas=%d\tPrice of Soda=%f\n", numSodas,priceofSoda);
    printf("Quantity of Snacks=%d\tPrice of Snack=%f\n", numSnacks,priceofSnacks);  
    printf("Quantity of Candies=%d\tPrice of Candy=%f\n\n", numCandies,priceofCandy);

    int sel;
    printf("Select 1 for Soda\nSelect 2 for Snack\nSelect 3 for Candy\n");
    scanf("%d", &sel);

    int qn;
    float bill;

    switch (sel){
        case 1:
         printf("Enter Quantity of product\n");
         scanf("%d", &qn);
         if(qn<=numSodas){
            numSodas=numSodas-qn;
            bill=qn*priceofSoda;
            if (rem>=bill){
                rem=rem-bill;
             printf("You have Purchased Sodas of Amount %.2f!\n", bill);
            }
            else{
                printf("Insufficient Balance\n");
            }
         }
         else{
            printf("Invalid Quantity!");
         }
         break;
        case 2:
         printf("Enter Quantity of product\n");
         scanf("%d", &qn);
         if(qn<=numSnacks){
            numSnacks=numSnacks-qn;
            bill=qn*priceofSnacks;
            if (rem>=bill){
                rem=rem-bill;
             printf("You have Purchased Snacks of Amount %.2f!\n", bill);
            }
            else{
                printf("Insufficient Balance\n");
            }
         }
         else{
            printf("Invalid Quantity!");
         }
         break;
        case 3:
         printf("Enter Quantity of product\n");
         scanf("%d", &qn);
         if(qn<=numCandies){
            numCandies=numCandies-qn;
            bill=qn*priceofCandy;
            if (rem>=bill){
                rem=rem-bill;
             printf("You have Purchased Candies of Amount %.2f!\n", bill);
            }
            else{
                printf("Insufficient Balance\n");
            }
         }
         else{
            printf("Invalid Quantity!\n");
         }
         break;
        default:
         printf("Inavlid Selection\n");
         break;
    }
    }
    else{
        printf("Your Balance is not sufficient for Buying Anything\n");
    }
     int exit;
     printf("Do you want to Exit!1 for Yes and 0 for No\n");
     scanf("%d", &exit);
     if(exit==1){
        check=0;
     }
     else{
        check=1;
     }
    printf("\n\n\n");

   
    
    
    } while(check);
    
    printf("Progam has Ended!");
    }
    else{
        printf("Price and Qunatity can't be negative!\nRun program Again!\n");
    }
   return 0;
}