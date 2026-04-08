#include <stdio.h>
#include "var_study.h"

int run_chap_1(void) {
    //4바이트
    int result = 10;
    printf("%d\n", result);
    result = result + 10;
    //8바이트
    constexpr double pi1 = 3.14159265358979323846;
    //4바이트
    constexpr float pi2 = 3.4444444f;
    //1바이트(constexpr: 불변)
    constexpr char alphabet = 'Z';
    // 문자열은 char 배열
    char name[] = "good";

    //불리언
    const bool is_true = true;
    printf("%d\n", result);
    printf("%c\n", alphabet);
    // float일 때 (4바이트 실수)
    printf("%f\n", pi1);
    // double일 때 (8바이트 실수)
    printf("%.3lf\n", pi2);
    // 소수점 자릿수를 제한하고 싶다면 (예: 소수점 2자리)
    printf("%.2f\n", pi1);
    //0,1 로찍힘
    printf("%d\n",is_true);
    //배열 출력
    printf("%s\n", name);

    return 1;
}