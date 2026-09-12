#include <stdio.h>

int main() {
    int n, first, last, digits = 1;
    int middle, result;

    printf("Enter a number: ");//user input the numbers
    scanf("%d", &n);//scan the number that user input 

    last = n % 10;

    while (n >= 10) {
        n = n / 10;
        digits = digits * 10;
    }

    first = n;

    middle = (n * 0);  // only for initialization

    printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);

    return 0;
}

