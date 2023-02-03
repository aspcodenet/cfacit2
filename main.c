#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));
    while(1){
        int dice1 = rand() % 6 + 1;
        int dice2 =  rand() % 6 + 1;

        printf("Rolling the dices...\n");
        printf("The values are...\n");
        printf("%d\n%d\n",dice1,dice2);

        printf("Roll the dices again?");
        char ch;
        scanf(" %c", &ch);
        if(ch != 'y' )
            break;
    }

}