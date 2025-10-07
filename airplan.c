#include <stdio.h>

int main() {
    double a = 18;     // จำนวนล้อ (number of wheels)
    double b = 1130;   // ล้อที่สัมผัสพื้น (wheel touch)
    double c = 180883; // น้ำหนัก (weight)
    double d;          // ความดัน (pressure)

    printf("---------Boeing 747-400---------\n");

    printf("number of wheels : ");
    scanf("%lf", &a);

    printf("wheel touch : ");
    scanf("%lf", &b);

    printf("weight : ");
    scanf("%lf", &c);

    // สูตรคำนวณความดันต่อหนึ่งล้อ
    d = c / (a * b);

    printf("pressure of one wheel : %.2lf\n", d);

    return 0;
}
