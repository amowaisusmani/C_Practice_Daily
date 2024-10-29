#include <stdio.h>

int main() {
    int item = 5;        // Example value; change as needed
    int product = 10;    // Example initial value
    int x = 7;           // Example value; change as needed
    int y = 3;           // Example value; change as needed
    int zero_count = 0;  // Initialize zero count
    int minus_sum = 0;   // Initialize sum for negative values
    int plus_sum = 0;    // Initialize sum for positive values

    // Part (a)
    if (item != 0) {
        product *= item;
    }
    printf("Product: %d\n", product);

    // Part (b)
    y = (x > y) ? (x - y) : (y - x);
    printf("Absolute difference stored in y: %d\n", y);

    // Part (c)
    if (x == 0) {
        zero_count++;
    } else if (x < 0) {
        minus_sum += x;
    } else {
        plus_sum += x;
    }

    // Output results for Part (c)
    printf("Zero count: %d\n", zero_count);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: %d\n", plus_sum);

    return 0;
}
