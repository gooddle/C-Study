#include <stdio.h>
#include <string.h>

int run_chap_3(void) {
    constexpr int a = 8;
    //for문
    for (int b = 0; b < a; b++) {
       printf("%d\n", b);
    }
    int b = 0;
    //while
    while (b < a) {
        printf("%d\n", b);
        b++;
    }
    //do-while
    do {
        printf("%d\n", b);
        b++;
    } while (b == a);

    //배열 반복문
    constexpr  char name[] = "gooo";
    for (int i = 0; i < strlen(name); i++) {
        printf("%c\n", name[i]);
    }
    //배열 크기
    printf("%lu\n", sizeof(name));
    int c = 9;

    int name2 [20] = {0,};

    // 1. 배열 전체가 차지하는 메모리 크기 (바이트 단위)
    int total_size = sizeof(name2);
    printf("배열 전체의 메모리 크기는 %d\n", total_size);
    // 2. int형 데이터 한 개가 차지하는 메모리 크기
    int unit_size = sizeof(name2[0]);
    printf("배열 1개의 메모리 크기는 %d\n", unit_size);
    // 3. '칸 수' (전체 크기 / 한 칸 크기)
    int length = sizeof(name2) / sizeof(name2[0]);
    for (int i =0; i < length; i++) {
        name2[i] +=i;
        printf("%d\t", name2[i]);
    }
    //첫번째 case에서 break
    switch (c) {
        case 9:
            printf("a is nine\n");
            break; // 여기서 탈출!
        case 10:
            printf("a is ten\n");
            break;
        default:
            printf("I don't know\n");
    }
    return  1;
}
