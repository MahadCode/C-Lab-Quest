#include<stdio.h>
int removeIntegers(int arr[],int size);

int main(){
int check=1;
int example=1; //example variable just shows which time program is running again
    while(check){
    printf("Example %d\n", example);

    int size;
    printf("Enter the size of array(>0):\n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the element of array:\n");
    for(size_t i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array after removing Negative Elements:\n");
    int countNegative=removeIntegers(arr,size);
    printf("No. of Negative Elements:\n%d\n", countNegative);
    printf("Size After removing negative elements:\n%d\n", size-countNegative);

    //prompting users he wants to exit or run again the program
    printf("\nEnter 0 for Exit!\nOther for Run Again!\n");
    scanf("%d", &check);     
    puts("\n");
    example++;
    }
printf("Exiting!");
return 0;
}

//This Function returns the number of negative elements in array
//and prints the remaining non-negative elements
//it does not changes the indices of elments in array
//Because Sorting is not allowed
int removeIntegers(int arr[],int size){
    int negativecount=0;
    for(size_t i=0; i<size; i++){
        if(arr[i]<0){
           negativecount++;
        }
        else{
           printf("%d  ", arr[i]);    //printing the elements which are not negative in same order
        }
    }
    puts("");
    return negativecount;
}