#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 100

double numbers[SIZE]; //we saved our numbers here.

int main()
{

    int choice, loopNumber, step; //

    double number;

    int i, j;

    double total;

    double tempNumber;

    do {

        total = 0.00;

        printf("\n -- Calculator -- With Loops -- Kaloyan Angelov\n");

        printf("\n -- Enter 1 for up number on step. -- ");
        printf("\n -- Enter 2 for sum up square root of number. -- ");
        printf("\n -- Enter 3 for addition N numbers. -- ");
        printf("\n -- Enter 4 for substraciton N numbers. -- ");
        printf("\n -- Enter 5 for multiplication N numbers. -- ");
        printf("\n -- Enter 6 for division N numbers. -- ");
        printf("\n -- Enter 7 for clear up your screen. --");
        printf("\n -- Enter 0 for quit from program. --\n\n");


        printf(" oo Enter your choice: ");

        scanf("%d", &choice);

        if(choice == 1) {

            printf("\n oo Enter number: ");

            scanf("%lf", &number);

            printf("\n oo Enter the step: ");

            scanf("%d", &step);

            printf("\n\n -- Result: %.2f^%d = %.2f --", number, step, pow(number, step) );

        } else if(choice == 2) {

            printf("\n oo Enter number: ");

            scanf("%lf", &number);

            printf("\n\n -- Result: Square root of number: %.2f = %.2f =  --", number, sqrt(number) );


        } else if(choice == 3) {

             printf("\n oo Enter how much numbers you want to be addited: ");

            scanf("%d", &loopNumber);

            loopNumber = abs(loopNumber);

                if(loopNumber > 100) {

                    printf("\n !!! Maximum ot numbers = 100. Try with smaller number");

                } else {

                printf("\n");

                for(i = 0; i < loopNumber; i++) {

                    printf(" oo Enter your number %d: ", i + 1);

                    scanf("%lf", &numbers[i]);

                    total = total + numbers[i];

                }

                printf("\n -- Total of addition with your %d numbers = %.2f --", loopNumber, total);

            }

            } else if(choice == 4) {

            printf("\n oo Enter how much numbers you want to be substracted: ");

            scanf("%d", &loopNumber);

            loopNumber = abs(loopNumber);

            printf("\n");

             if(loopNumber > 100) {

                    printf("\n !!! Maximum ot numbers = 100. Try with smaller number");

                } else {

                for(i = 0; i < loopNumber; i++) {

                    printf(" oo Enter your number %d: ", i + 1);

                    scanf("%lf", &numbers[i]);

                }

                printf("\n\n");

                printf(" oo ");
                for(i = 0; i < loopNumber; i++) {

                if(i == loopNumber - 1) {

                    printf("[%.2f] ", numbers[i]);

                } else {

                    printf("[%.2f] - ", numbers[i]);

                }

                if(i < 1) {

                    total = numbers[0];

                } else {

                    total = total - numbers[i];

                }

                }

                printf(" = [ %.2f ] oo", total);

            printf("\n\n -- Total of substraction with your %d numbers = %.2f --", loopNumber, total);

                }
            } else if(choice == 5) {

            printf("\n oo Enter how much numbers you want to be multiplicated: ");

            scanf("%d", &loopNumber);

            loopNumber = abs(loopNumber);

                if(loopNumber > 100) {

                    printf("\n !!! Maximum ot numbers = 100. Try with smaller number");

                } else  {

                printf("\n");

                for(i = 0; i < loopNumber; i++) {

                    printf(" oo Enter your number %d: ", i + 1);

                    scanf("%lf", &numbers[i]);

                    if(i < 1) {

                    total = numbers[0];

                    } else {

                    total = total * numbers[i];

                    }

                }

                printf("\n -- Total of multiplication with your %d numbers = %.2f --", loopNumber, total);

                }

            } else if (choice == 6) {

            printf("\n oo Enter how much numbers you want to be multiplicated: ");

            scanf("%d", &loopNumber);

            loopNumber = abs(loopNumber);

                if(loopNumber > 100) {

                    printf("\n !!! Maximum ot numbers = 100. Try with smaller number");

                } else  {

                printf("\n");

                for(i = 0; i < loopNumber; i++) {

                    printf(" oo Enter your number %d: ", i + 1);

                    scanf("%lf", &numbers[i]);

                    if(i < 1) {

                    total = numbers[0];

                    } else {

                    total = total / numbers[i];

                    }

                }

                printf("\n -- Total of division with your %d numbers = %.2f --", loopNumber, total);

                }

        } else if(choice == 7) {

            system("clear");

        } else if(choice == 0) {

            printf("\n oo You quit.");

        } else {

            printf("\n !!! Please enter valid number from menu. !!!");
        }

            printf("\n");

    } while(choice != 0);

    return 0;
    
}
