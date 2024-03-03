#include <stdio.h>

// Static inline function to calculate the cube of a number
static inline int cube(int num) {
    return num * num * num;
}

int main() {
    int x = 5;
    int result = cube(x);

    printf("The cube of %d is %d\n", x, result);

    return 0;
}

