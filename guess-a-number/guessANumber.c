#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));   // Initialization, should only be called once.
    int random = (rand() % (100)) + 1;
    int input;

    for (int i = 0; i < 7; i++){
        scanf("%d", &input);
        if (input == random) {
            printf("Congrats");
            return 0;
        } else if (input < random)
        {
            printf("LOW");
        } else {printf("HIGH");}
        printf("\n");
        
    }

    printf("Think harder doofus");
    return 0;

}