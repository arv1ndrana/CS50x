/*
                  ___________
                 |          |
Source Code --> | Compiler | --> Machine Code
               |__________|

*/


// Program: Basic Printing


// #include <stdio.h>

// int main(void)
//{

//     printf("Hi! MOM\n");
//     return 0;
// }


// Program: Name and Team


// #include <stdio.h> // <--- Header file / Library
// #include <cs50.h> // <--- Header file / Library

// int main(void)
// {
//     string name = get_string("Enter your name: ");
//     int rollNo = get_int("Enter your roll number: ");
    
//     printf("Hi! %s.\n", name);

//     if (rollNo % 2 == 0){ // remainder of rollNo / 2 is equal to 0
//         printf("Your are team BLUE.\n");
//     } else {
//         printf("You are team RED.\n");
//     }
    
//     return 0;
// }

// Program: Basic if else statements

// #include <stdio.h>
// #include <cs50.h>

// int main(void){
//     int a = get_int("Enter a number: ");
//     int b = get_int("Enter another number: ");

//     if (a > b)
//     {
//         printf("%i is greatest.\n",a);
//     }
//     else if (a < b)
//     {
//         printf("%i is greatest.\n",b);
//     }
//     // else if (a == b){
//     //     printf("%i and %i are equal.", a, b);
//     // }

//     else
//     {
//         printf("%i and %i are equal.",a,b)
//     }
// }


// Program: increment operator

// #include <stdio.h>
// #include <cs50.h>

// int main(void){

//     int counter = 0;

//     // counter = counter + 1;
//     // counter += 1;
//     counter++;
//     return 0;
// }


// Program: Concept of OR and char data type

// #include <cs50.h>
// #include <stdio.h>

// int main(void)
// {
//     char y_or_n = get_char("Do you agree? ");

//     if (y_or_n == 'y' || y_or_n == 'Y')
//     {
//         printf("You agreed.\n");
//     }

//     else if (y_or_n == 'n'  || y_or_n == 'N')
//     {
//         printf("You disagreed.\n");
//     }
//     else if (y_or_n == 'Y')  // DON'T REPEAT YOURSELF
//     {
//         printf("You agreed.\n");
//     }
//     else if (y_or_n == 'N')
//     {
//         printf("You disagreed.\n");
//     }
// }



// Program: Concept of for and while loops

// #include <stdio.h>

// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Meow!\n");
//     }

//     int j = 0;
//     while (j < 3)
//     {
//         printf("Meow!\n");
//         j++;
//     }
// }



// Program: true = 1

// #include <stdio.h>
// int main(void){

//     while (1)
//     {
//         printf("Meow!\n");
//     }
//     return 0;
// }


// Program: Concept of function and return


// #include <stdio.h>
// #include <cs50.h>

// int square(int number);
// int main(void)
// {

//     printf("Squared Number: %i.\n",square(get_int("Enter a number: ")));
// }

// int square(int number)
// {
//     return number * number;
// }



// Program: Basic function example

// #include <stdio.h>
// #include <cs50.h>

// int add(int a, int b);

// int main(void)
// {
//     int x = get_int("Enter a number: ");
//     int y = get_int("Enter another number: ");

//     int sum = add(x,y);
//     printf("Sum: %i", sum);

// }

// int add(int a, int b)
// {
//     return a + b;
// }


// Program: Mario Brick Generator

// #include <stdio.h>
// #include <cs50.h>


// int bricks(int rows, int columns);
// int main(void)
// {
//     int n;

//     do 
//     {
//         n = get_int("Enter a number: ");
//     }
//     while (n < 1);


//     bricks(n,n);
// }

// int bricks(int rows, int columns)
// {
//     for (int i = 0; i < columns; i++){
//         for (int j = 0; j < rows; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }


// Program: Truncation

#include <stdio.h>
#include <cs50.h>

int main(void){

    int x = get_int("Enter a number: ");
    int y = get_int("Enter another number: ");

    // printf("%i", x / y);
    // printf("%f\n", x / y);

    // float z = x / y;
    // float z = (float) x / (float) y; // Type Casting
    double z = (double) x / (double) y; // Type Casting
    // printf("%f", z);
    // printf("%.2f", z);
    printf("%.20f", z);
    return 0;
}
