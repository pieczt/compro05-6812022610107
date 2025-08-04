#include <stdio.h>

int main() {
    // ประกาศตัวแปรสำหรับข้อมูลส่วนบุคคล
    char name;
    int age;
    float height;

    // ประกาศตัวแปรสำหรับข้อมูลผลการเรียน
    char subject;
    float grade;
    char symbol;

    // รับข้อมูลส่วนบุคคลจากผู้ใช้
    printf("Enter name, age, height (e.g. Pete 18 170.0): ");
    scanf(" %c %d %f", &name, &age, &height);

    // รับข้อมูลผลการเรียนจากผู้ใช้
    printf("Enter subject, grade, symbol (e.g. M 3.5 A): ");
    scanf(" %c %f %c", &subject, &grade, &symbol);

    // แสดงผลข้อมูลส่วนบุคคล
    printf("%c is %d years old and %.1f centimeters tall.\n", name, age, height);

    // แสดงผลข้อมูลผลการเรียน
    printf("In subject %c, %c got %.2f which is symbolized as '%c'.\n",
           subject, name, grade, symbol);

    return 0;
}