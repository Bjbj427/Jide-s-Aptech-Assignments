// #include <stdio.h>

// int main() {
//     printf("Name: Jide\n");
//     printf("Age: 63\n");
//     printf("Hobby: Sleeping\n");
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int a = 10;
//     int b = 5;
//     int sum = a + b;

//     printf("Sum: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int length = 8;
//     int width = 4;
//     int area = length * width;

//     printf("Area: %d\n", area);
//     return 0;
// }

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

    return 0;
}
