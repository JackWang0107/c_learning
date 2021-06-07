#include <stdio.h>
#define FUNDLEN 50


struct funds
{
    char bank[FUNDLEN];
    double bankfound;
    char save[FUNDLEN];
    double savefund;
};

double sum ( struct funds moolah);

int main(void){
    struct funds stan = {
        "Garlic-Melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8543.94
    };
    printf("Stan has a total of $%.2f.\n", sum(stan));

    return 0;
}

double sum ( struct funds moolah){
    return moolah.bankfound + moolah.savefund;
}
