#include <stdio.h>// Include the standard input-output header file

int main() {// โปรแกรมนี้แสดงการจัดรูปแบบการพิมพ์ข้อมูลด้วย printf
    // บรรทัดที่ 1: a = 0.617%
    printf("a=%6.3f%%\n", 0.617); // %6.3f คือช่องกว้าง 6 ชิดขวาแสดงทศนิยม 3 ตำแหน่ง

    // บรรทัดที่ 2: b =    25%
    printf("b=%4d%%\n", 25); // ช่องกว้าง 4 ตัวเลขอยู่ชิดขวา

    // บรรทัดที่ 3: c = 19.000%
    printf("c =%6.3f%%\n", 19.000); // %6.3f คือช่องกว้าง 6 ชิดขวาแสดงทศนิยม 3 ตำแหน่ง

    // บรรทัดที่ 4: d =     9%
    printf("d  =%-2d%%\n", 9); // ช่องกว้าง 2 ตัวเลขอยู่ซ้าย

    // บรรทัดที่ 5: e = 124.555%
    printf("e=%7.3f%%\n", 124.555); // %7.3f คือช่องกว้าง 7 ชิดขวาแสดงทศนิยม 3 ตำแหน่ง

    // บรรทัดที่ 6: f = 0.001%
    printf("f=%5.3f%%\n", 0.001); // %5.3f คือช่องกว้าง 5 ชิดขวาแสดงทศนิยม 3 ตำแหน่ง

    return 0;
}