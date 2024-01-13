#include <stdio.h>
#include <stdbool.h>
int main(){
    int count;
    printf("How many calculations would you like to calculate:");
    scanf("%d",&count);
    if (count > 0)
    {
        while (count > 0)
        {
            int choice;
            printf("1.Addition\t 2.subtraction\t 3.division\t 4.Multiplication \n what do you like to calculate? ");
            scanf("%d",&choice);
            
            if (choice==1)
            {
                int first_number;
                printf("Enter first digit to be calculated : ");
                scanf("%d",&first_number);
                int second_number;
                printf("Enter second digit to be caculated : ");
                scanf("%d",&second_number);

                int answer = first_number + second_number ;
                printf("The answer to your calculation equals: %.2f\n", (float) answer);
            }
            else if (choice==2)
            {
                int first_number;
                printf("Enter first digit to be calculated : ");
                scanf("%d",&first_number);
                int second_number;
                printf("Enter second digit to be caculated : ");
                scanf("%d",&second_number);

                int answer = first_number - second_number;
                printf("The answer to your calculation equals: %.2f\n", (float) answer);
            }
            else if (choice==3)
            {
                float first_number;
                printf("Enter first digit to be calculated : ");
                scanf("%d",&first_number);
                float second_number;
                printf("Enter second digit to be caculated : ");
                scanf("%d",&second_number);

                float answer = first_number / second_number;
                printf("The answer to your calculation equals: %.2f\n", answer);
            }
            else if (choice==4)
            {
                int first_number;
                printf("Enter first digit to be calculated : ");
                scanf("%d",&first_number);
                int second_number;
                printf("Enter second digit to be caculated : ");
                scanf("%d",&second_number);

                int answer = first_number * second_number;
                printf("The answer to your calculation equals: %.2f \n", (float) answer);
            }
            else
            {
                printf("Enter either 1 2 3 or 4 to perform calculations \n");
            }
            count--;
        }
        printf("\nThank you for performing calcuations with me, Bye :)");
    }
    else
    {
        printf("\nToo bad I realy wish you did math with me :( \n");
    }

    return 0;
}