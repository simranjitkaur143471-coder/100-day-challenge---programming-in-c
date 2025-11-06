#include <stdio.h>

int main() {
    long long binary, onesComplement = 0;
    int remainder, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    long long original = binary; 

    while (binary != 0) {
        remainder = binary % 10;  

        if (remainder == 0)
            onesComplement += 1 * place;
        else
            onesComplement += 0 * place;

        binary /= 10;
        place *= 10;
    }

    printf("1's Complement of %lld = %lld\n", original, onesComplement);

    return 0;
}
