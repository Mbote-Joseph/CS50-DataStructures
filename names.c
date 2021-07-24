#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void){
    string names[]={"Adam","Brian","Claudia","David","Erick","Fred","Gideon","Harry","Ian","Joseph"};
    for(int i=0, n=10; i<n;i++){
        if(strcmp(names[i], "DAVID")==0){
            printf("Found\n");
            return 0;
        }
        // else{
        //     printf("Not found\n");
        // }
    }
    printf("Not found\n");
    return 1;
}