#include <stdio.h>
#include <stdlib.h>


void decimalToBinary(double number) {
    int integerPart = (int)number;       
    double fractionalPart = number - integerPart; 

    printf("Binary Soncu : ");
    if (integerPart == 0) {
        printf("0");
    } else {
        char binaryInteger[32];
        int index = 0;

        while (integerPart > 0) {
            binaryInteger[index++] = (integerPart % 2) + '0'; 
            integerPart /= 2;
        }
    
        for (int i = index - 1; i >= 0; i--) {
            printf("%c", binaryInteger[i]);
        }
    }
  
    printf(".");
    if (fractionalPart == 0) {
        printf("0");
    } else {
        int precision = 10;
        for (int i = 0; i < precision; i++) {
            fractionalPart *= 2;
            int bit = (int)fractionalPart;
            printf("%d", bit);
            fractionalPart -= bit;

            if (fractionalPart == 0) {
                break;
            }
        }
    }

    printf("\n");
}

int main() {
    char input[20];
    printf("Ondalik bir sayi girin Ornek 21.132 : ");
    fgets(input, sizeof(input), stdin);
    double number = atof(input);
    printf("Girdigin sayi : %f\n", number);
    printf("Devam etmek için Enter'a 2 kez basın.\n");
    getchar();
    getchar(); 
    decimalToBinary(number);

    return 0;
}
