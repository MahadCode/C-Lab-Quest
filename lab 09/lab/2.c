//it contains the incorrect removeDuplicate function
#include<stdio.h>
void sortArray(int arr[],int siz);
int removeDuplicate(int arr[],int size);
int printOdd(int arr[], int size, int index);


int main(){
    int size=10;
    int arr[size];
    printf("Enter the elements of arrays row-wise:\n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    

    sortArray(arr,size);

    int f_size=removeDuplicate(arr,size);
    printf("\n\nSize after removing duplicate:\n%d\n", f_size);
    
    int index=0;
    int sum=printOdd(arr,size,index);
    printf("Sum of odd Number:\n%d\n", sum);

}

void sortArray(int arr[], int siz){
    printf("\nSorted Array:\n");
    for(int j=0; j<siz; j++){

    for(int i=j+1; i<siz; i++){
       if(arr[j]>arr[i]){
        int exc=arr[j];
        arr[j]=arr[i];
        arr[i]=exc;
       }
        
    }

    }

    for(int i=0; i<10; i++){
        printf("%d\n", arr[i]);
    }
}


int removeDuplicate(int arr[],int size){
   int end=1;
   for(int j=0; j<=size; j++){
    for(int i=j+1; i<=size-end; i++){
       if(arr[j]==arr[i]){
         int swap=arr[size-end];
         arr[size-end]=arr[i];
         arr[i]=swap;
         end++;    
       }
        
    }
   }
   return size-(end-1);
   
}

int printOdd(int arr[], int size, int index){

    int sum;
    if(arr[index]%2!=0){
      sum=arr[index];     
    }
    else{
        sum=0;
    }
    
    if(index==(size-1)){
        return sum;
    }
    return sum+printOdd(arr,size,index+1);

}

