#include <stdio.h>

int main() {
    float cost, discount, total_discount = 0;
    int day = 1;
    int zero_days = 0;  // นับจำนวนวันที่ใช้จ่ายเป็น 0

    printf("----ยินดีต้อนรับเข้าสู่โครงการคนละครึ่ง----\n\n");

    while (1) {
        printf("กรอกค่าใช้จ่ายวันที่ %d: ", day);
        scanf("%f", &cost);

        // ตรวจสอบกรณีค่าใช้จ่ายเป็น 0
        if (cost == 0) {
            zero_days++;
            printf("วันนี้ไม่มีการใช้จ่าย (วันศูนย์ครั้งที่ %d)\n", zero_days);
        } else {
            // คำนวณส่วนลดตามเงื่อนไข
            if (cost <= 300)
                discount = cost / 2;
            else
                discount = 150;

            total_discount += discount;
            printf("ส่วนลดของวันที่ %d = %.2f บาท\n", day, discount);
        }

        printf("ส่วนลดรวมปัจจุบัน = %.2f บาท\n\n", total_discount);

        // เงื่อนไขหยุดการทำงาน
        if (total_discount > 3000) {
            printf("ส่วนลดรวมเกิน 3,000 บาท — โปรแกรมหยุดทำงาน\n");
            break;
        }
        if (zero_days > 14) {
            printf("ไม่มีการใช้จ่ายเกิน 14 วัน — โปรแกรมหยุดทำงาน\n");
            break;
        }

        day++;
    }

    printf("\nขอบคุณที่ใช้โครงการคนละครึ่งครับ!\n");
    return 0;
}
