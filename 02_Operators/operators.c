#include <stdio.h>
#include <string.h>

int run_chap_2(void) {
    int a = 10;
    int b = 20;
    //곱셈
    printf("%d\n", a*b);
    //뎃셈
    printf("%d\n", a+b);
    //나눗셈 몫
    printf("%d\n", a/b);
    //뺄셈
    printf("%d\n", a-b);
    //나눗셈 나머지
    printf("%d\n", a%b);

    // 배열 크기 선 할당
    char name[20] = "good";
    char last_name[] = "lee";
    strcat(name, " ");         // 1. "good "이 됨
    strcat(name, last_name);   // 2. "good lee"가 됨
    printf("%s\n", name);

    int level = 10;
    //10 후위 연산자
    printf("%d\n", level++);
    //11
    printf("%d\n", level);
    int level2 = 11;
    //12 전위 연산자
    printf("%d\n", ++level2);

    int score = 100;
    score += 100;
    //200
    printf("%d\n", score);
    score -= 10;
    //190
    printf("%d\n", score);
    score *= 10;
    //1900
    printf("%d\n", score);
    score /= 10;
    //190
    printf("%d\n", score);
    return 1;
}
