#include <iostream>
using namespace std;

int main() {
    int two_thousand_notes = 0;
    int five_hundred_notes = 0;
    int two_hundred_notes = 0;
    int one_hundred_notes = 0;
    int fifty_notes = 0;
    int twenty_notes = 0;
    int ten_notes = 0;
    int five_notes = 0;
    int two_notes = 0;
    int one_notes = 0;

    int amount;


    cout << "Enter the Amount in rupees: ";
    cin >> amount;

    while(amount != 0) {
        switch(amount) {
            case 2000 ... 9999:
            two_thousand_notes = two_thousand_notes + 1;
            amount = amount - 2000;
            break;

            case 500 ... 1999:
                five_hundred_notes = five_hundred_notes + 1;
                amount = amount - 500;
                break;

            case 200 ... 499:
                two_hundred_notes = two_hundred_notes + 1;
                amount = amount - 200;
                break;

            case 100 ... 199:
                one_hundred_notes = one_hundred_notes + 1;
                amount = amount - 100;
                break;

            case 50 ... 99:
                fifty_notes = fifty_notes + 1;
                amount = amount - 50;
                break;
        
            case 20 ... 49:
                twenty_notes = twenty_notes + 1;
                amount = amount - 20;
                break;

            case 10 ... 19:
                ten_notes = ten_notes + 1;
                amount = amount - 10;
                break;

            case 5 ... 9:
                five_notes = five_notes + 1;
                amount = amount - 5;
                break;

            case 2 ... 4:
                two_notes = two_notes + 1;
                amount = amount - 2;
                break;

            case 1:
                one_notes = one_notes + 1;
                amount = amount - 1;
                break;
            }
        }

    cout << "\nThe amount of 2000 notes required: " << two_thousand_notes;
    cout << "\nThe amount of 500 notes required: " << five_hundred_notes;
    cout << "\nThe amount of 200 notes required: " << two_hundred_notes;
    cout << "\nThe amount of 100 notes required: " << one_hundred_notes;
    cout << "\nThe amount of 50 notes required: " << fifty_notes;
    cout << "\nThe amount of 20 notes required: " << twenty_notes;
    cout << "\nThe amount of 10 notes required: " << ten_notes;
    cout << "\nThe amount of 5 notes required: " << five_notes;
    cout << "\nThe amount of 2 notes required: " << two_notes;
    cout << "\nThe amount of 1 notes required: " << one_notes << "\n";
}