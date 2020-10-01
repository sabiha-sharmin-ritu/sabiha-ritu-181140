#include<stdio.h>

main(){

    int i,j;

//Patterns
    for(j=1; j<=5; j++){

        for(i=0; i<j; i++)
            printf("*");

        printf("\n");
    }
}
