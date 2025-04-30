#include<stdio.h>
int frequent(int arr[],int size);

int main(){
int check=1;
int example=1;   //example variable just shows which time program is running again
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

    int element=frequent(arr,size);
    printf("Most Frequent Element:\n%d\n", element);

   //prompting users he wants to exit or run again the program
    printf("\nEnter 0 for Exit!\nOther for Run Again!\n");
    scanf("%d", &check);     
    puts("\n");
    example++;
    }
printf("Exiting!");
return 0;
}

//function which returns most frequent element and prints its frequeny
int frequent(int arr[],int size){
    int highestFrequency=0;     //it stores the frequency of most frequent element
    int currentFrequency=0;     //it stores the frequency of current element in loop
    int index=0;
    for(size_t i=0; i<size; i++){
        int count=0;
        for(size_t j=0; j<size; j++){
            if(arr[i]==arr[j]){
               count++;
            }
        }

        currentFrequency=count;
        if(currentFrequency>highestFrequency){
            highestFrequency=currentFrequency;
            index=i;
        }
    }
    printf("Frequency of Most Frequent Element:\n%d\n", highestFrequency);

    return arr[index];   //return most frequent elment

}