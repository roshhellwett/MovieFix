#include <stdio.h>
void displayMovies()
{
    printf("1. Avatar 2 - $12.50\n");
    printf("2. Avengers - $11.00\n");
    printf("3. Jurassic World - $10.00\n");
    printf("Select movie (1-3)\n");
    printf("-->");
}
void greetingdisFunc()
{
    printf("\n");
    printf("*----BOOKING SECTION----*");
    printf("\n");
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
char userchoiceFunc()
{
    char choice;
    scanf(" %c", &choice);
    return choice;
}
int main()
{
    char choice;
    do
    {
        greetingdisFunc();
        int movieChoice, seats;
        float price, total;

        displayMovies();
        scanf("%d", &movieChoice);

        printf("Enter number of seats \n");
        printf("-->");
        scanf("%d", &seats);

        price = MoviePrice(movieChoice);
        if (price == 0.0)
        {
            printf("Invalid movie choice!\n");
            return 1;
        }
        total = calculateTotal(price, seats);
        printTicket(movieChoice, seats, total);
        printf("\nDO YOU WANT TO BOOK AGAIN\n");
        printf("Y FOR YES\n");
        printf("N FOR NO\n");
        printf("CHOOSE Y || N\n");
        printf("-->");
        choice = userchoiceFunc();
        if (choice == 'n' || choice == 'N')
        {
            printf("\nTHANKS FOR USING MOVIEFIX\n");
            return 0;
        }
    }while (choice == 'y' || choice == 'Y');
    return 0;
}
