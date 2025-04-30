#include<stdio.h>
int s(char array1[],char array2[],int size,int index);

int main(){
    char array1[100];
    char array2[100];
    int i;
    for(i=0; i<5; i++){
        scanf("%c", &array1[i]);
    }
    int size=i-1;
    int index=0;

    int j=s(array1,array2,size,index);
}

int s(char array1[],char array2[],int size,int index){
    if(array1[index]=='\0'){
        return 0; 
    }
    array2[size]=array1[index];
    printf("%c\n", array2[size]);
    return s(array1,array2,size-1,index+1);   
}