#include <stdio.h>

int main() {
    int limit1, limit2, limit3;
    int a1[100], a2[100], a3[100];
    int i, j, temp;

    printf("Enter 1st Array limit:\n");
    scanf("%d", &limit1);

    printf("Enter 1st array value:\n");
    for (i = 0; i < limit1; i++) {
        scanf("%d", &a1[i]);
    }

    printf("Enter 2nd array limit:\n");
    scanf("%d", &limit2);

    printf("Enter 2nd array value:\n");
    for (i = 0; i < limit2; i++) {
        scanf("%d", &a2[i]);
    }

    limit3 = limit1 + limit2;

    for (i = 0; i < limit1; i++) {
        a3[i] = a1[i];
    }

    for (j = 0; j < limit2; j++) {
        a3[i] = a2[j];
        i++;
    }

    printf("Merged array is this:\n");
    for (i = 0; i < limit3; i++) {
        printf("%d\t", a3[i]);
    }

    // for (i = 0; i < limit3 - 1; i++) {
    //     for (j = i + 1; j < limit3; j++) {
    //         if (a3[i] < a3[j]) {
    //             temp = a3[i];
    //             a3[i] = a3[j];
    //             a3[j] = temp;
    //         }
    //     }
    // }

    // printf("\nMerged descending array is this:\n");
    // for (i = 0; i<limit3; i++) {
    //     printf("%d\t", a3[i]);
    // }

    return 0;
}
