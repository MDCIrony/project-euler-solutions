#include <stdio.h>
#include <stdbool.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main(void) {
    int n, max, i;
    int sum = 0;

    max = 4000000;
    i = 1;
    while (true) {
        int fib = fibonacci(i);
        if (fib > max) {
            printf("Fibonacci number exceeded 4 million: %d\n", fib);
            printf("Exiting loop.\n");
            break;
        }
        if (fib % 2 == 0) {
            sum += fib;
        }
        i++;
    }

    printf("Sum of even Fibonacci numbers: %d\n", sum);
    return 0;
}