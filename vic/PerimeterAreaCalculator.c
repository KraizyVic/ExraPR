#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){
    const float PI = 3.142;
    
    while (true)
    {
        int choice;
        printf("\n \n(Enter Assigned Numbers ONLY) \n\t1.Perimeter \n\t2.Area \nWhat would you like to calculate?: ");
        scanf("%d",&choice);

        if (choice==1)
        {
            int shape;
            printf("You have chosen PERIMETER \n\t1. Rectangle \n\t2. square \n\t3. Circle \n\t4.Triangle \nChoose a shape: ");
            scanf("%d",&shape);
            int leghth ,width, side, radius, side_one, side_two, side_three;

            if (shape==1)
            {
                printf("Enter Leghth: ");
                scanf("%d",&leghth);
                    
                printf("Enter Width: ");
                scanf("%d",&width);
                double perimeter = (leghth + width)*2;
                printf("And the perimeter is %.2lf",perimeter);
            }
            else if (shape==2){
                printf("Enter value of one Side: ");
                scanf("%d",&side);
                double perimeter = side * 4;
                printf("And the perimeter is %.2lf",perimeter);
            }
            else if (shape==3){
                printf("Enter Radius: ");
                scanf("%d",&radius);
                double circumference = (PI * radius) * 2;
                printf("And the Circumference is %.2lf",circumference);
            }
            else if (shape==4){
                printf("\nEnter side-One: ");
                scanf("%d",&side_one);
                    
                printf("\nEnter side-Two: ");
                scanf("%d",&side_two);
                    
                printf("\nEnter side-Three: ");
                scanf("%d",&side_three);
                float perimeter = side_one + side_two + side_three;
                printf("\nAnd the perimeter is %.2f",perimeter);
            }
            else
            {
                printf("\nInvalid Choice\n");
            }
        }
        else if (choice==2)
        {
            int shape;
            printf("\nYou ha chosen AREA \n \t1. Rectangle \n\t2. square \n\t3. Circle \n\t4.Triangle \nChoose a shape: ");
            scanf("%d",&shape);
            if (shape==1)
            {
                int leghth;
                printf("\nEnter Leghth: ");
                scanf("%d",&leghth);
                int width;    
                printf("\nEnter Width: ");
                scanf("%d",&width);
                float ara = leghth * width;
                printf("And the Area is %.2f",ara);
            }
            else if(shape==2){
                float side;
                printf("\nEnter value of one Side: ");
                scanf("%f",&side);
                float area = pow(side, 2);
                printf("And the Area is %.2f",area);
            }
            else if(shape==3){
                float radius;
                printf("\nEnter Radius: ");
                scanf("%f",&radius);
                float area = (PI * pow(radius, 2));
                printf("\nAnd the Area is %.2f",area);    
            }
            else if(shape==4){
                float height;
                printf("\nEnter height: ");
                scanf("%f",&height);
                float base;    
                printf("\nEnter base: ");
                scanf("%f",&base);
                float area = (base * height)/2;
                printf("\nAnd the Area is %.2f",area);
            }
            else
            {
                printf("\nInvalid Choice\n");
            }  
        }
        else
        {
            printf("\nEnter Either 1 or 2: ");
        }
    }
    
    return 0;
}
