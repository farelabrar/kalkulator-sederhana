#include <stdio.h>

int main() {
    double angka1, angka2;
    char operator;

    printf("Masukkan operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Masukkan angka : ");
    scanf("%lf %lf", &angka1, &angka2);

    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", angka1, angka2, angka1 + angka2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", angka1, angka2, angka1 - angka2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", angka1, angka2, angka1 * angka2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", angka1, angka2, angka1 / angka2);
            break;
        default:
            printf("Error! operator tidak di temukan");
    }
    return 0;
}
