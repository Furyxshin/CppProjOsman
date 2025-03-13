#include <stdio.h>

int main(){
    double pH;

    printf("Enter the pH value: ");
    scanf("%f", &pH);

    // a. if statement with one alternative
    if (pH == 7) {
        printf("Neutral\n");
    }

    // b. Nested if statement
    if (pH > 7) {
        if (pH < 12) {
            printf("Alkaline\n");
        } else {
            printf("Very alkaline\n");
        }
    } else if (pH < 7) {
        if (pH > 2) {
            printf("Acidic\n");
        } else {
            printf("Very acidic\n");
        }
    }

    // c. Multiple-alternative if
    if (pH == 7) {
        printf("Neutral\n");
    } else if (pH > 7 && pH < 12) {
        printf("Alkaline\n");
    } else if (pH >= 12) {
        printf("Very alkaline\n");
    } else if (pH > 2 && pH < 7) {
        printf("Acidic\n");
    } else {
        printf("Very acidic\n");
    }

    return 0;
}
