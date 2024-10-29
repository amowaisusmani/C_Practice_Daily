#include <stdio.h>
int main() {
    int item = 5;        
    int product = 10;    
    int x = 7;           
    int y = 3;           
    int zero_count = 0;  
    int minus_sum = 0;   
    int plus_sum = 0;    

    //part a
    if (item != 0) {
        product *= item;
    }
    printf("Product: %d\n", product);

    //part b
    y = (x > y) ? (x - y) : (y - x);
    printf("Absolute difference stored in y: %d\n", y);

    //part c
    if (x == 0) {
        zero_count++;
    } else if (x < 0) {
        minus_sum += x;
    } else {
        plus_sum += x;
    }
    printf("Zero count: %d\n", zero_count);
    printf("Minus sum: %d\n", minus_sum);
    printf("Plus sum: %d\n", plus_sum);

    return 0;
}
