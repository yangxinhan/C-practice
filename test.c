#include <stdio.h>

int main() {
    int a=78;
    int b=86;
    int c=70;
    int d=84;
    int total;
    float avg;

    total =a+b+c+d;
    avg = total / 4.0;

    printf("生物：%d\n", a);
    printf("數學：%d\n", b);
    printf("物理：%d\n", c);
    printf("化學：%d\n", d);
    printf("總分：%d\n", total);
    printf("平均：%.2f\n", avg);

    return 0;
}