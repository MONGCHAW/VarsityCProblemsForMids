#include <stdio.h>

void main()
{

    // Initiazlizing Variables

    int amount; // Unintialized Amount

    int note1, note2, note5, note10, note20, note50, note100, note500; // Unintialized notes

    note1 = note2 = note5 = note10 = note20 = note50 = note100 = note500 = 0; // Initialized to zero

    // Inputing the Month Number

    printf("Enter amount: ");
    scanf("%d", &amount);

    // Conditinal Oparations

    if (amount >= 500)
    {
        note500 = amount / 500;
        amount -= note500 * 500;
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount -= note100 * 100;
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount -= note50 * 50;
    }
    if (amount >= 20)
    {
        note20 = amount / 20;
        amount -= note20 * 20;
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        amount -= note10 * 10;
    }
    if (amount >= 5)
    {
        note5 = amount / 5;
        amount -= note5 * 5;
    }
    if (amount >= 2)
    {
        note2 = amount / 2;
        amount -= note2 * 2;
    }
    if (amount >= 1)
    {
        note1 = amount;
    }

    // Printing the Amounts
    printf("Total number of notes = \n");
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);
}