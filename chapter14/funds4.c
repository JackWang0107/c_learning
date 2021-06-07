#include <stdio.h>
#define FUNDLEN 50
#define N 2


struct funds
{
    char bank[FUNDLEN];
    double bankfound;
    char save[FUNDLEN];
    double savefund;
};

double sum (const struct funds money[], int n);

int main(void){
    struct funds jones[N] = {
        {
            "Garlic-Melon Bank",
            4032.27,
            "Lucky's Savings and Loan",
            8543.94
        },
        {
            "Honest Jack's Bank",
            3620.88,
            "Party Time Saving",
            3802.91
        }
    };
    printf("The Joneses has a total of $%.2f.\n", sum(jones, N));

    return 0;
}

double sum (const struct funds money[], int n){
    double total;
    int i;

    for (i = 0, total = 0; i < n; i++)
        total += money[i].bankfound + money[i].savefund;
    return (total);
}
