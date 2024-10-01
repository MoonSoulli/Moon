#include <stdio.h>

int findMax(int a, int b, int c) {
    int max = a;
    
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    return max;
}

int main() {
    int num1, num2, num3;

    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = findMax(num1, num2, num3);

    printf("The maximum number is: %d\n", max);

    return 0;
}
