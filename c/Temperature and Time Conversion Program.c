#include <stdio.h>

int main() {
    int mainChoice, subChoice;
    float c, f;
    int hour, minute;

    while (1) {
        printf("\n========== MAIN MENU ==========\n");
        printf("1. Temperature Conversion\n");
        printf("2. Time Conversion\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &mainChoice);

        if (mainChoice == 3) {
            printf("Exiting program...\n");
            break;
        }

        switch (mainChoice) {

        case 1:
            printf("\n--- Temperature Conversion ---\n");
            printf("1. Celsius to Fahrenheit\n");
            printf("2. Fahrenheit to Celsius\n");
            printf("Enter your option: ");
            scanf("%d", &subChoice);

            if (subChoice == 1) {
                printf("Enter Celsius: ");
                scanf("%f", &c);
                f = (c * 9.0 / 5.0) + 32;
                printf("Fahrenheit = %.2f\n", f);
            } 
            else if (subChoice == 2) {
                printf("Enter Fahrenheit: ");
                scanf("%f", &f);
                c = (f - 32) * 5.0 / 9.0;
                printf("Celsius = %.2f\n", c);
            } 
            else {
                printf("Invalid option!\n");
            }
            break;

        case 2:
            printf("\n--- Time Conversion ---\n");
            printf("1. 12-Hour to 24-Hour Format\n");
            printf("2. 24-Hour to 12-Hour Format\n");
            printf("Enter your option: ");
            scanf("%d", &subChoice);

            if (subChoice == 1) {
                char period[3];
                printf("Enter time in hh mm AM/PM: ");
                scanf("%d %d %s", &hour, &minute, period);

                if ((period[0]=='P'||period[0]=='p') && hour!=12)
                    hour += 12;
                if ((period[0]=='A'||period[0]=='a') && hour==12)
                    hour = 0;

                printf("24-hour format: %02d:%02d\n", hour, minute);
            }
            else if (subChoice == 2) {
                printf("Enter time in 24-hour format (hh mm): ");
                scanf("%d %d", &hour, &minute);

                if (hour == 0)
                    printf("12:%02d AM\n", minute);
                else if (hour == 12)
                    printf("12:%02d PM\n", minute);
                else if (hour > 12)
                    printf("%02d:%02d PM\n", hour - 12, minute);
                else
                    printf("%02d:%02d AM\n", hour, minute);
            }
            else {
                printf("Invalid option!\n");
            }
            break;

        default:
            printf("Invalid main menu choice!\n");
        }
    }

    return 0;
}

