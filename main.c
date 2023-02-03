#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int summa  = 0;
    for(int i = 0; i < 10; i++){
        int tal;
        printf("Tal %d", i+1);
        scanf(" %d", &tal);
        summa += tal;
    }
    printf("Summa %d", summa);


}