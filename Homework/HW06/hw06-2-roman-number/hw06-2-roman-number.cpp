#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("%d = ", num);
    for (int i = 0; i < 13; i++) {
        int count = num / values[i]; // จำนวนครั้งที่ต้องแสดงสัญลักษณ์นี้
        for (int j = 0; j < count; j++) {
            printf("%s", symbols[i]);
        }
        num -= count * values[i];
    }
    printf("\n");

}//end main function