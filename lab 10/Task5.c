#include <stdio.h>
void cyclicRotate(int arr[], int n, int k);
void reversing(int arr[], int first, int last);


int main() {
    int size;
    printf("Enter the size of array(>0):\n");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the element of array:\n");
    for(size_t i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    int indexRotate;
    printf("By how many indices you want rotation(1 to size-1)!\n");
    scanf("%d", &indexRotate);

    if(indexRotate>0 && indexRotate<size){
    
    cyclicRotate(arr, size, indexRotate);

    // Now we are printint  the rotated array
    printf("Rotated array: ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    }
    else{
        printf("Invalid Input!\nAgain run the program!\n");
    }

    return 0;
}


void cyclicRotate(int arr[], int n, int k) {
    // Reversing the all elements of the array
    reversing(arr,0,n-1);
    // Reversing the first elements
    reversing(arr,0,k-1);
    // Reversing the rest of the elements of the array
    reversing(arr,k,n-1);
}

//This will reverse the given array array
void reversing(int arr[], int first, int last) {
    while (first < last) {
        int hold = arr[first];
        arr[first] = arr[last];
        arr[last] = hold;
        first++;
        last--;
    }
}