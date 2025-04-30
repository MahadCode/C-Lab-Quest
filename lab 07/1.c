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
            printf("Invalid Quantity!");
         }
         break;
        default:
         printf("Inavlid Selection");
         break;
    }
    }
    else{
        check=0;
    }
    printf("\n\n\n");
    
    } while(check);
    
    printf("Progam has Ended!");

   return 0;
}