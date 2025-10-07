#include <stdio.h>
#include <math.h>

// ฟังก์ชันคำนวณระยะทางระหว่างจุด 2 จุด
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}

// คำนวณพื้นที่สามเหลี่ยมจาก 3 จุด
double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    return fabs((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) / 2.0);
}

int main() {
    double x1, y1, x2, y2, x3, y3;  // จุดของสามเหลี่ยม
    double cx, cy, r;               // ศูนย์กลางและรัศมีวงกลม

    printf("กรอกพิกัดสามเหลี่ยม (x1 y1 x2 y2 x3 y3): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    printf("กรอกศูนย์กลางวงกลมและรัศมี (cx cy r): ");
    scanf("%lf %lf %lf", &cx, &cy, &r);

    // หาระยะจากศูนย์กลางถึงแต่ละจุดของสามเหลี่ยม
    double d1 = distance(cx, cy, x1, y1);
    double d2 = distance(cx, cy, x2, y2);
    double d3 = distance(cx, cy, x3, y3);

    double areaTri = triangleArea(x1, y1, x2, y2, x3, y3);
    double areaCircle = M_PI * r * r;

    printf("\nผลการตรวจสอบ:\n");

    // 1️⃣ ตรวจว่าสามเหลี่ยมอยู่ในวงกลม
    if (d1 <= r && d2 <= r && d3 <= r) {
        printf("✅ สามเหลี่ยมอยู่ในวงกลม\n");
        printf("พื้นที่ไม่ซ้อนทับ ≈ %.2f\n", areaCircle - areaTri);
    }
    // 2️⃣ ตรวจว่าวงกลมอยู่ในสามเหลี่ยม (แบบง่าย — ใช้จุดศูนย์กลางแทน)
    else if (cx > fmin(fmin(x1,x2),x3) && cx < fmax(fmax(x1,x2),x3) &&
             cy > fmin(fmin(y1,y2),y3) && cy < fmax(fmax(y1,y2),y3)) {
        printf("✅ วงกลมอยู่ในสามเหลี่ยม (โดยประมาณ)\n");
        printf("พื้นที่ไม่ซ้อนทับ ≈ %.2f\n", areaTri - areaCircle);
    }
    // 3️⃣ กรณีไม่ครอบกัน
    else {
        printf(" วงกลมและสามเหลี่ยมไม่ซ้อนกัน\n");
        printf("non-overlapping areas้อนทับ ≈ %.2f\n", areaTri + areaCircle);
    }

    return 0;
}
