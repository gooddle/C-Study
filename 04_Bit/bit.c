

#include <stdio.h>

int run_chap_4(void) {
    int a = 0xAF; //1010 1111
    int b = 0xB5; //1011 0101

    printf("%x \n", a & b);   // a & b = 10100101, (AND) — 둘 다 1인 비트만
    printf("%x \n", a | b);   // a | b =10111111, (OR) — 하나라도 1이면
    printf("%x \n", a ^ b);   // a ^ b = 00011010, (XOR) — 서로 다른 비트만
    printf("%x \n", ~a);      // ~a = 1....1 01010000, (NOT) — 모든 비트 반전
    printf("%x \n", a << 2);  // a << 2 = 1010111100, (왼쪽 시프트 2칸)
    printf("%x \n", b >> 3);  // b >> 3 = 00010110,  (오른쪽 시프트 3칸)

    return 1;
}
