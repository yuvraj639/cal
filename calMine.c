#include <stdio.h>
#include <math.h>
int main()
 {
    char name[20];
      
    printf("What is your name? : ");

    //scanf("%s", name);
    fgets(name, 25, stdin);
    printf("Hey, %s Welcome to my Calculator\n", name);
    
    int x;

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
                printf("The sum is: %-8.4lf\n", result);

                break;
            case 2: 
            
                for (int i = 1; i < n; i++) 
                {
                    result -= list[i];
                }

                printf("The difference is: %-8.4lf\n", result);

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
    // else if (x == 2) 
    // {
    //     int o;

        // printf("How many numbers do you want to operate on?");

        //   scanf("%d", &o);

        //   int list[o];

        // for (int i = 0; i < o; i++)
        // {
        //       printf("Entered number is %d: \n", i + 1);
        //       scanf("%d", &list[o]);
        // }

    //    int Choice;

    //    printf("\nChoose an operation -->\n1).Trignometric Functions.\n2).Logarithmic Functions.\n3).Tabel of any number.\n4).square of any number.\n5). square root of a number.\n");
    
    //    printf("Enter your choice (1,2,3,4,5)\n", Choice);
        
    //     scanf("%d" , &Choice);

    //     switch (Choice)
    //     {
    //     case 1:
    //      for (int t = 1; t < o; t++)
    //      {
    //         double result = sin(t);
    //         printf("Sin(_) --> ");
    //         scanf(" %lf", t);
    //         double x = sin(t);
    //         print("%ld", x);
            
    //       }
    //      break;
    //     }
        // case 2:
        // for (int t = 1; t < o; t++)

        // case 3:
        // for ()
        
        // default:
        //    break;
    // } 
    else
    {
        printf("Invalid choice!\n");
    }

    return 0;
}

