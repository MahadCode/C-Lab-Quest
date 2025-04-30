#include<stdio.h>

int main(){
int check=1;
while(check){
    int width;
    printf("Enter the width of pattern:\n");
    scanf("%d", &width);
    if(width>=5 && width%2!=0){
        while(check){
        int height;
        printf("Enter the height of pattern:\n");
        scanf("%d", &height);
        if(height>=3 && height%2!=0){

           for(int i=0; i<height; i++){
                for(int j=0; j<width; j++){
                    if(i%2==0){
                        printf("+");
                    }
                    else{
                        if(j%2==0){
                            printf("+");
                        }
                        else{
                            printf(" ");
                        }
                    }
                }
                printf("\n"); 
            }
            check=0;
        }
        else{
            printf("Invalid Input!\nHeight must odd and atleast 3\nTry Again!\n\n");
        }
        }

    }
    else{
        printf("Invalid Input!\nWidth must odd and atleast 5\nTry Again!\n\n");
    }
}
return 0;
}