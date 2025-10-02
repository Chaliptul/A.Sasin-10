#include <stdio.h>
#include <math.h>
int main() {
    double a = 2.63;   // ่odd
    double b = -0.28;   // even
    double d;          // depth
    float sum = 0;
    int i;
	float position;
	    
	//ใน 1 อาทิตย์หอยทากเดินไปได้
    printf("The distance a snail walks in one week \n");
    printf("Day 1 : %02f m \n",a);
	sum = a+b;
	printf("Day 2 : %f m \n",sum);
 	sum = sum+a;
	printf("Day 3 : %f m \n",sum);
	sum = sum+b;
	printf("Day 4 : %f  m \n",sum);
	sum = sum+a;
	printf("Day 5 : %f m \n",sum);
	sum = sum+b;
	printf("Day 6 : %f m \n",sum);
	sum = sum+a;
	printf("Day 7 : %f m \n ",sum);
		printf("Total distance: %.2f m \n",sum);
	
	
	// depth from user
    printf("Enter the depth : ");
    scanf("%lf", &d);
    
    // How many days till the snail can escape 
    double delta = a - b;                  // ระยะสุทธิต่อ 2 วัน
    double n = ceil((d - a) / delta);      // จำนวนรอบ (ปัดขึ้น
    int days = (int)(2 * n + 1);           // จำนวนวันจริง

    // แสดงผล
    printf("the snail can escape in %d days \n " , days);

    return 0;
}
