#include<stdio.h>
int main(){
    int number[]={20 , 45, 27 , 47 ,55 , 67 , 75, 88 ,90};
    for (int i = 1; i<9 ; i++){
        if (number[i]==67 ){
            printf("found the element at index %d", i);
            return 0;
        }
        
       
    }
    printf("element not found");
    return -1; 
}