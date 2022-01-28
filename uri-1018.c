#include <stdio.h>

int main()
{

    int total_money;

    // input
    scanf("%d", &total_money);

    // note of 100
    int note_100 = total_money / 100;
    int money_for_50 = total_money % 100;

    //  note of 50
    int note_50 = money_for_50 / 50;
    int money_for_20 = money_for_50 % 50;

    //  note of 20
    int note_20 = money_for_20 / 20;
    int money_for_10 = money_for_20 % 20;

    //  note of 10
    int note_10 = money_for_10 / 10;
    int money_for_5 = money_for_10 % 10;

    //  note of 5
    int note_5 = money_for_5 / 5;
    int money_for_2 = money_for_5 % 5;

    //  note of 2
    int note_2 = money_for_2 / 2;
    int money_for_1 = money_for_2 % 2;

    //  note of 1
    int note_1 = money_for_1 / 1;

    printf("%d\n", total_money);
    printf("%d nota(s) de R$ 100,00\n", note_100);
    printf("%d nota(s) de R$ 50,00\n", note_50);
    printf("%d nota(s) de R$ 20,00\n", note_20);
    printf("%d nota(s) de R$ 10,00\n", note_10);
    printf("%d nota(s) de R$ 5,00\n", note_5);
    printf("%d nota(s) de R$ 2,00\n", note_2);
    printf("%d nota(s) de R$ 1,00\n", note_1);

    return 0;
}