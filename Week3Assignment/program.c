
#include <stdio.h>

#define MAXVALUE 70
#define MINVALUE 1

int
main(int argc, char *argv[]) {
    int num, i;

    printf("Enter numbers: "); 
    // Will only function properly for numbers less than or equal to 70 and more than 0
    while (scanf("%d", &num) == 1) {
        if ((num <= MAXVALUE) && (num >= MINVALUE)) {
            printf("%2d |", num);
            for (i = 0; i < num; i++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}