#include <stdio.h>
#include <cs50.h>

int main() {
    int n;
    int i;
    int j;
    n = get_int("");

    // Top square
    printf("+");
    for(i = 0; i < n; i++) {
        printf("-");
    }
    printf("+ \n");

    // Middle square
    for(i = 0; i < n; i++) {
        printf("|");

        for(j = 0; j < n; j++) {
            printf(" ");
        }

        printf("|\n");
    }

    // bottom square
    printf("+");
    for(i = 0; i < n; i++) {
        printf("-");
    }
    printf("+ \n");
}
