
#include <stdio.h>
#include <math.h>

int main()
{
    char name[20];

    printf("What is your name? : ");


    fgets(name, 25, stdin);
    printf("Hey, %s Welcome to my Calculator\n", name);

    int x;

    int count = 1;
    while (count == 1) {

        printf("\nWhat would you like to do?\n1) Basic Calculator\n2) Advanced Calculator\nChoose 1 or 2: ");

        scanf("%d", &x);

        if (x == 1)
        {
            int n;

            printf("How many numbers do you want to operate on? ");

            scanf("%d", &n);

            int list[n];

            for (int i = 0; i < n; i++)
            {
                printf("Enter number %d: ", i + 1);

                scanf("%d", &list[i]);
            }

            int choice;
            printf("\nChoose an operation -->\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n");

            printf("Enter your choice (1/2/3/4): ");

            scanf("%d", &choice);

            double result = list[0];

            switch (choice)
            {
                case 1:
                    for (int i = 1; i < n; i++)
                    {
                        result += list[i];
                    }
                    printf("The sum is: %-8.2lf\n", result);

                    break;
                case 2:

                    for (int i = 1; i < n; i++)
                    {
                        result -= list[i];
                    }

                    printf("The difference is: %-8.2lf\n", result);

                    break;
                case 3:
                    result = 1;
                    for (int i = 0; i < n; i++)
                    {
                        result *= list[i];
                    }
                    printf("The product is: %-8.4lf\n", result);
                    break;
                case 4:
                    result = list[0];

                    for (int i = 1; i < n; i++)
                    {
                        result /= list[i];
                    }
                    printf("The result of division is: %-8.4lf\n", result);
                    break;
                default:
                    printf("Invalid choice!\n");
                    break;
            }

        }
        else if (x == 2)
        {
            int o;
            printf("How many numbers do you want to operate on? ");
            scanf("%d", &o);

            double list[o];


            for (int i = 0; i < o; i++)
            {
                printf("Enter number %d: \n", i + 1);
                scanf("%lf", &list[i]);
            }

            int Choice;
            printf("\nChoose an operation -->\n1) Trigonometric Functions\n2) Logarithmic Functions\n3) Table of any number\n4) Square of any number\n5) Square root of a number\n");
            printf("Enter your choice (1/2/3/4/5): ");
            scanf("%d", &Choice);


            switch (Choice)
            {
                case 1:
                    for (int t = 0; t < o; t++)
                    {
                        printf("Sin(%lf) = %lf\n", list[t], sin(list[t]));

                        printf("Cos(%lf) = %lf\n", list[t], cos(list[t]));

                        printf("Tan(%lf) = %lf\n", list[t], tan(list[t]));
                    }
                    break;
                case 2:
                    for (int t = 0; t < o; t++)
                    {
                        if (list[t] > 0)
                        {
                            printf("Log(%lf) = %lf\n", list[t], log(list[t]));
                        } else {
                            printf("Error: Logarithm is not defined for non-positive numbers.\n");
                        }
                    }
                    break;
                case 3:
                    for (int t = 0; t < o; t++)
                    {
                        printf("\nTable of %.2lf:\n", list[t]);
                        for (int i = 1; i <= 10; i++)
                        {
                            printf("%.2lf X %d = %.2lf\n", list[t], i, list[t] * i);
                        }
                    }
                    break;
                case 4:
                    for (int t = 0; t < o; t++) {
                        printf("The square of %.5lf is %.5lf\n", list[t], list[t] * list[t]);
                    }
                    break;
                case 5:
                    for (int t = 0; t < o; t++)
                    {
                        if (list[t] >= 0)
                        {
                            printf("The square root of %.5lf is %.5lf\n", list[t], sqrt(list[t]));
                        } else
                        {
                            printf("Error: Square root of negative number is not allowed.\n");
                        }
                    }
                    break;
                default:
                    printf("Invalid choice!\n");
                    break;
            }
        } else
        {
            printf("Invalid choice!\n");
        }
        //loop defined here
        char myChar;
        printf("Do you want to perform more calculations (y/n): ");
        scanf(" %c", &myChar);

        if (myChar == 'y') {
            count = 1;
        } else if (myChar == 'n') {
            count = 2;
        } else {
            printf("Invalid input. Please enter 'y' or 'n'.\n");
        }
    }
 return 0;
}
