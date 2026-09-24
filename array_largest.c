#include <stdio.h>

int main() {
    int arr[100], n, i, largest;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest = %d\n", largest);

    return 0;
}

OUTPUT:

Enter number of elements: 98
67
987
654
7564
89T5476
Largest = 286052357
