#include<stdio.h>

int main(){
int check=1;
while(check){       //This will keep iterating if input is invalid

    int size;
    printf("Enter the size of pattern:\n");
    scanf("%d", &size);

    if(size>=2 && size%2==0){     //input validation
        //printing pattern
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(j-i>=0){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
            printf("\n"); 
            }

        check=0;  //this will end the loop
    }
    else{
        printf("Invalid Input!\nSize must Even and atleast 2\nTry Again!\n"); 
    }
}
return 0;
}