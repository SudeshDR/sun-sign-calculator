#include <iostream.h>
#include <conio.h>
#include <string.h>

int main() {
    int month, day;

    // Prompt the user to enter the birth month
    cout << "Enter the birth month (1-12): ";
    cin >> month;

    // Prompt the user to enter the birth day
    cout << "Enter the birth day: ";
    cin >> day;

    // Validate the input
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "Invalid input. Please enter a valid birth month and day." << endl;
        getch();
        return 0;
    }

    // Calculate the sun sign
    char sunSign[20];
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        strcpy(sunSign, "Aries");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        strcpy(sunSign, "Taurus");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        strcpy(sunSign, "Gemini");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        strcpy(sunSign, "Cancer");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        strcpy(sunSign, "Leo");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        strcpy(sunSign, "Virgo");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        strcpy(sunSign, "Libra");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        strcpy(sunSign, "Scorpio");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        strcpy(sunSign, "Sagittarius");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        strcpy(sunSign, "Capricorn");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        strcpy(sunSign, "Aquarius");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        strcpy(sunSign, "Pisces");
    }

    // Display the sun sign
    cout << "Your sun sign is: " << sunSign << endl;

    getch();
    return 0;
}
