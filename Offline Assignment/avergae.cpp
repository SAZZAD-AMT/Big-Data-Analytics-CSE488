#include <stdio.h>

int main() {
    int n=3, i;
    float sum = 0, data;

    printf("Enter the elements: ");

    for(i = 0; i < n; i++) {
        scanf("%f", &data);
        sum += data;
    }

    float average = sum / n;
    printf("Average = %.2f", average);

    return 0;
}