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
