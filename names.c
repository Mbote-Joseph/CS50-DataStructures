#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void){
    string names[]={"Adam","Brian","Claudia","David","Erick","Fred","Gideon","Harry","Ian","Joseph"};
    for(int i=0, n=10; i<n;i++){
        if(strcmp(names[i], "Joseph")){
            printf("Found\n");
        }
    }
}