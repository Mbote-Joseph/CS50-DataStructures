#include<cs50.h>
#include<stdio.h>
#include<string.h>

// typedef struct phonebook
// {
//     /* data */
//     string name;
//     string number;
// };

int main(void){
    string names[]={"Joseph","Mbote"};
    string numbers[]={"+254-7040-31617","+254-7926-22515"};

    for(int i=0, n=2;i<n;i++){
        if(strcmp(names[i],"Joseph")==0){
            printf("Found %s\n",numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
