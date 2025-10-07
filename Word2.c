#include <stdio.h>
#include <string.h>

int main() {
    char text[200];      // ข้อความหลัก
    char word[50];       // คำที่ต้องการค้นหา
    char *pos;           // ตัวชี้ตำแหน่งในสตริง
    int index;           // เก็บตำแหน่งที่เจอ

    printf("Enter your world: : ");
    fgets(text, sizeof(text), stdin);   // อ่านข้อความจากผู้ใช้

    // ลบ '\n' ที่ fgets เพิ่มเข้ามา
    text[strcspn(text, "\n")] = '\0';

    printf("Enter your world that you looking for:  ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    pos = strstr(text, word);   // ค้นหาคำในข้อความ

    if (pos != NULL) {
        index = pos - text;  // คำนวณตำแหน่งเริ่มต้น
        printf("Found \"%s\" at index %d\n", word, index);
    } else {
        printf("Not found \"%s\" in the sentecn \n", word);
    }

    return 0;
}
