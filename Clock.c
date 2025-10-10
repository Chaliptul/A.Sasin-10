#include <stdio.h>
#include <math.h>

int main() {
    int hours, minutes;

    // รับค่าเวลาจากผู้ใช้
    printf("กรุณากรอกชั่วโมง (0-23): ");
    scanf("%d", &hours);

    printf("กรุณากรอกนาที (0-59): ");
    scanf("%d", &minutes);

    // ตรวจสอบความถูกต้องของข้อมูล
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        printf("เวลาที่กรอกไม่ถูกต้อง!\n");
        return 0;
    }

    // ลดชั่วโมงให้อยู่ใน 12 ชั่วโมง
    int h = hours % 12;

    // คำนวณมุม
    double hour_angle = h * 30.0 + minutes * 0.5; // 30° ต่อชั่วโมง + 0.5° ต่อ 1 นาที
    double minute_angle = minutes * 6.0;         // 6° ต่อ 1 นาที

    // มุมระหว่างเข็ม
    double angle = fabs(hour_angle - minute_angle);

    // มุมเล็กสุด (ไม่เกิน 180°)
    if (angle > 180.0)
        angle = 360.0 - angle;

    printf("เวลา %02d:%02d น. --> มุมระหว่างเข็มชั่วโมงและเข็มนาที = %.2f องศา\n", hours, minutes, angle);

    return 0;
}
