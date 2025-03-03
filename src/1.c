#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int result = num1 * num2;
    printf("The product of %d and %d is %d.\n", num1, num2, result);
    return 0;
}
