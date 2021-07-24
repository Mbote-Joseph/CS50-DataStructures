#include<cs50.h>
#include<stdio.h>
#include<string.h>

typedef struct
{
    /* data */
    string name;
    string number;
}person;

int main(void){
   person people[0];
   people[0].name="Joseph";
   people[0].number="+254-7040-31617";

   people[1].name="Mbote";
   people[1].number="+254-7926-22515";

    for(int i=0, n=2;i<n;i++){
        if(strcmp(people[i].name,"Joseph")==0){
            printf("Found %s\n",people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
