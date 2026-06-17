#include <stdio.h>

int main(){
    int amount;
    int note100, note50, note20, note10, note5, note2, note1;

    printf("Input the amount: ");
    scanf("%d",&amount);

    note100 = amount/100;
    amount %= 100;

    note50 = amount/50;
    amount %= 50;

    note20 = amount/20;
    amount %= 20;

    note10 = amount/10;
    amount %= 10;

    note5 = amount/5;
    amount %= 5;

    note2 = amount/2;
    amount %= 2;

    note1 = amount;

    printf("There are: \n");
    printf("%d Note(s) of 100.00\n",note100);
    printf("%d Note(s) of 50.00\n",note50);
    printf("%d Note(s) of 20.00\n",note20);
    printf("%d Note(s) of 10.00\n",note10);
    printf("%d Note(s) of 5.00\n",note5);
    printf("%d Note(s) of 2.00\n",note2);
    printf("%d Note(s) of 1.00\n",note1);
    return 0;
}