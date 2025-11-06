#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1; 
    int hasOdd = 0;    
    int original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        remainder = num % 10; 

        if (remainder % 2 != 0) {  
            product *= remainder;
            hasOdd = 1;
        }

        num /= 10; 
    }

    if (hasOdd)
        printf("Product of odd digits of %d = %lld\n", original, product);
    else
        printf("No odd digits found in %d.\n", original);

    return 0;
}
