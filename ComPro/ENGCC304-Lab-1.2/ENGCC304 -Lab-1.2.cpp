#include <stdio.h>

int main() {
    char Name[50];
    int Age;

    printf("Enter your name: ");
    scanf("%49s", Name);   // จำกัดสูงสุด 49 ตัวอักษร

    printf("Enter your age: ");
    scanf("%d", &Age);

    printf("- - - - - -\n");
    printf("Hello %s\n", Name);
    printf("Age = %d\n", Age);

    return 0;
}
