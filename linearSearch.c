#include<cs50.h>
#include<stdio.h>
// Linear Search O(n)
int main(void){
    int marks[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0, n=10;i<n;i++){
        if(marks[i]==8){
            printf("Hi! Eight is here\n");
            return 0;
        }else if(marks[i] < 0){
             printf("Yoh, That mark is not found here !!\n");
            return 1;
        }
    }
   
}