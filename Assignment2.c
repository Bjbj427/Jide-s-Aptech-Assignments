// // #include <stdio.h>

// // int main() {
// //     char name[50];
// //     int age;
// //     char dept[50];

// //     printf("Enter your name: ");
// //     scanf("%s", name);

// //     printf("Enter your age: ");
// //     scanf("%d", &age);

// //     printf("Enter your department: ");
// //     scanf("%s", dept);

// //     printf("\nName: %s\nAge: %d\nDepartment: %s\n", name, age, dept);
// //     return 0;
// // }

// // #include <stdio.h>

// // int main() {
// //     int a, b;

// //     printf("Enter first number: ");
// //     scanf("%d", &a);

// //     printf("Enter second number: ");
// //     scanf("%d", &b);

// //     printf("Sum: %d\n", a + b);
// //     printf("Difference: %d\n", a - b);
// //     printf("Product: %d\n", a * b);
// //     printf("Quotient: %d\n", a / b);
// //     printf("Remainder: %d\n", a % b);

// //     return 0;
// // }

// #include <stdio.h>

// int main() {
//     float r;
//     float pi = 3.14159;

//     printf("Enter radius: ");
//     scanf("%f", &r);

//     float area = pi * r * r;
//     float circumference = 2 * pi * r;

//     printf("Area: %.2f\n", area);
//     printf("Circumference: %.2f\n", circumference);

//     return 0;
// }

#include <stdio.h>

int main() {
    float c;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    float f = (c * 9.0 / 5.0) + 32;

    printf("Fahrenheit: %.2f\n", f);

    return 0;
}
