#include <stdio.h>
int main() {
    char name = 'P'; //ใช้ char เพื่อเก็บตัวอักษรตัวแรกของชื่อตัวเอง ตัวอักษรตัวใหญ่
    int age = 18;        //ใช้ int เพื่อเก็บอายุ เลขจำนวนเต็ม
    double weight = 60.0; //ใช้ float เพื่อเก็บน้ำหนัก หน่วยกิโลกรัม

    printf("Student %c is %d years old.\n", name, age);//แสดงผลอักษรตัวแรกของชื่อและอายุ 
    printf("His weighs is %.1f kg.\n", weight);    //แสดงผลน้ำหนัก ทศนิยม 1 ตำแหน่ง

    return 0;//คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานสำเร็จ
}
  