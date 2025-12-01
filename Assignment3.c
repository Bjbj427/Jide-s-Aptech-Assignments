// // // // #include <stdio.h>

// // // // int main() {
// // // //     int num;
// // // //     printf("Enter a number: ");
// // // //     scanf("%d", &num);

// // // //     if (num % 2 == 0)
// // // //         printf("The number you entered is even.\n");
// // // //     else
// // // //         printf("The number you entered is odd.\n");

// // // //     return 0;
// // // // }

// // // #include <stdio.h>

// // // int main() {
// // //     int age;
// // //     printf("Enter your age: ");
// // //     scanf("%d", &age);

// // //     if (age < 13)
// // //         printf("You are a child.\n");
// // //     else if (age >= 13 && age <= 19)
// // //         printf("You are a teenager.\n");
// // //     else
// // //         printf("You are an adult.\n");

// // //     return 0;
// // // }

// // #include <stdio.h>

// // int main() {
// //     int a, b;
// //     printf("Enter first number: ");
// //     scanf("%d", &a);

// //     printf("Enter second number: ");
// //     scanf("%d", &b);

// //     if (a > b)
// //         printf("The greater number is: %d\n", a);
// //     else
// //         printf("The greater number is: %d\n", b);

// //     return 0;
// // }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char user[20], pass[20];

//     // Attempt 1
//     printf("Enter username: ");
//     scanf("%s", user);
//     printf("Enter password: ");
//     scanf("%s", pass);

//     if (strcmp(user, "admin") == 0 && strcmp(pass, "1234") == 0) {
//         printf("Login Successful\n");
//     } 
//     else {
//         printf("Incorrect username or password. Try again.\n\n");

//         // Attempt 2
//         printf("Enter username: ");
//         scanf("%s", user);
//         printf("Enter password: ");
//         scanf("%s", pass);

//         if (strcmp(user, "admin") == 0 && strcmp(pass, "1234") == 0) {
//             printf("Login Successful\n");
//         }
//         else {
//             printf("Incorrect username or password. Try again.\n\n");

//             // Attempt 3
//             printf("Enter username: ");
//             scanf("%s", user);
//             printf("Enter password: ");
//             scanf("%s", pass);

//             if (strcmp(user, "admin") == 0 && strcmp(pass, "1234") == 0) {
//                 printf("Login Successful\n");
//             }
//             else {
//                 printf("Account Locked. Too many failed attempts.\n");
//             }
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    float math, eng, phy, chem, comp;
    printf("Enter Math score: ");
    scanf("%f", &math);
    printf("Enter English score: ");
    scanf("%f", &eng);
    printf("Enter Physics score: ");
    scanf("%f", &phy);
    printf("Enter Chemistry score: ");
    scanf("%f", &chem);
    printf("Enter Computer Science score: ");
    scanf("%f", &comp);

    float avg = (math + eng + phy + chem + comp) / 5;

    printf("\nAverage Score = %.1f\n", avg);

    if (avg >= 70)
        printf("Final Grade = A\n");
    else if (avg >= 60)
        printf("Final Grade = B\n");
    else if (avg >= 50)
        printf("Final Grade = C\n");
    else
        printf("Final Grade = F\n");

    // Pass/Fail check
    if (math >= 50 && eng >= 50 && phy >= 50 && chem >= 50 && comp >= 50)
        printf("Status: Passed all subjects\n");
    else
        printf("Status: Failed at least one subject\n");

    return 0;
}
