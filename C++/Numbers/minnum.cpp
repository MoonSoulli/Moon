#include <stdio.h>

int findMin(int a, int b, int c, int d) {
    int min = a;
    
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }
    
    return min;
}

int main() {
    int num1, num2, num3, num4;

    printf("Enter four integer numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int min = findMin(num1, num2, num3, num4);

    printf("The minimum number is: %d\n", min);

    return 0;
}
