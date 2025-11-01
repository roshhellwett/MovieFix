#include <stdio.h>
void displayMovies()
{
    printf("1. Avatar 2 - $12.50\n");
    printf("2. Avengers - $11.00\n");
    printf("3. Jurassic World - $10.00\n");
    printf("Select movie (1-3): ");
}

float MoviePrice(int movieChoice)
{
    switch (movieChoice)
        {
        case 1:
        {
            return 12.50;
        }
        case 2:
        {
            return 11.00;
        }
        case 3:
        {
            return 10.00;
        }
        default:
        {
            return 0.0;
        }
    }
}

float calculateTotal(float price, int seats)
{
    return price * seats * 1.10;
}

void printTicket(int movieChoice, int seats, float total)
{
    switch (movieChoice)
    {
        case 1:
            printf("\nMOVIE SELECTED - AVATAR 2\n");
            break;
        case 2:
            printf("\nMOVIE SELECTED - AVENGERS\n");
            break;
        case 3:
            printf("\nMOVIE SELECTED - JURASSIC WORLD\n");
            break;
        default:
            printf("\nInvalid movie selection!\n");
            return;
    }

    printf("NO. OF SEATS - %d\n", seats);
    printf("TOTAL BILL WITH 10%% TAX - $%.2f\n", total);
}

int main()
{
    int movieChoice, seats;
    float price, total;

    displayMovies();
    scanf("%d", &movieChoice);

    printf("Enter number of seats: ");
    scanf("%d", &seats);

    price = MoviePrice(movieChoice);
    if (price == 0.0)
    {
        printf("Invalid movie choice!\n");
        return 1;
    }
    total = calculateTotal(price, seats);
    printTicket(movieChoice, seats, total);
    return 0;
}
