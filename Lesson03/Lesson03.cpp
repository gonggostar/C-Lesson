
#include <stdio.h>

int main()
{
    //연산자(Operator)
    //산술연산자 : +, -, *, /, %
    //대입연산자 : =, +=, -=, *=, /=, %=
    //증감연산자 : ++, --
    //비교연산자 : >, >=, <, <=, ==, !=
    //논리연산자 : &&, ||, !
    //비트연산자 : <<, >>, &. |, ^, ~
    //기타연산자 : ?:, &, *

    int n1 = 10;
    int n2 = 3;
    int n3;
    float f1;

    // 산술 연산자
    n3 = n1 + n2;
    printf("%d + %d = %d\n", n1, n2, n3);

    n3 = n1 - n2;
    printf("%d - %d = %d\n", n1, n2, n3);

    n3 = n1 * n2;
    printf("%d * %d = %d\n", n1, n2, n3);

    f1 = n1 / (float)n2; //실수와 정수의 연산은 실수가 된다(결과를 실수로 얻으려고 해도 연산이 정수일 경우 결과값도 정수가 된다 그래서 실수로 형변환이 필요함)
    printf("%d / %d = %f\n", n1, n2, f1);

    n3 = n1 % n2;
    printf("%d %% %d = %d\n", n1, n2, n3);

    // L.V(변수왼쪽) = R.V(변수오른쪽) (변수, 상수, 하수, 연산....)
    int num = 1;
    int sum = 0;
    sum += num; // sum = sum + num; ==> sum = 1
    sum += num; // sum = sum + num; ==> sum = 2 (누적연산)
    sum -= num; // sum = sum - num; ==> sum = 1
    sum *= num; // sum = sum * num;
    sum /= num; // sum = sum / num;
    sum %= num; // sum = sum % num;


    // 형변환 (type cast) : 형변환은 데이터의 손실이 발생될 수 있다.
    char n = 100; // -128 ~ 127
    n1 = 300;
    n = n1; // 묵시적 형변환
    n = (char)n1;  // 명시적 형변환
    f1 = 3.3333F;
    n1 = f1;  //소수점 이하는 소실 됨, 묵시적 형변환
    n1 = (int)f1; // 


    // 비교연산자 : >, >=, <, <=, ==, !=
    // 비교연산을 수행한 결과는 항상 논리값(1,0)
    int result;
    result = 1 > 5;
    printf("result = %d\n", result);

    result = 1 <= 5;
    printf("result = %d\n", result);

    result = 1 == 5;
    printf("result = %d\n", result);

    result = 1 != 5;
    printf("result = %d\n", result);

    printf("===============================================\n");


    // 논리 연산자 : &&(and), ||(or), !(not)
    num = -5;
    sum = 0;
    result = num && sum; // T && F ==> F
    printf("result = %d\n", result);

    result = num || sum; // T || F ==> T
    printf("result = %d\n", result);

    result = !num; // -5는 True이고 ==> False로 반전
    printf("result = %d\n", result);

    printf("===============================================\n");

    // 증감 연산자 : ++(증가연산자), --(감소연산자, num = num - 1)
    num = 0;
    num++; // num = num + 1;, num += 1;
    printf("num = %d\n", num);

    ++num; // num = num + 1;
    printf("num = %d\n", num);

    printf("num = %d\n", num++); // 2출력 ===> 3으로
    printf("num = %d\n", ++num); // 3+1=4 ===> 4

    //
    sum = -num; // -가 부호연산자로 사용 됨

    // 연산잔 우선순위 : 시험에 자주 출제
    /* 
    1 : ++, --
    2 : +, - (부호연산자)
    3 : *, /, %
    4 : +, -
    5 : >, >=, <, <=
    6 : ==, !=
    7 : 논리연산자
    8 : 대입연산자
    */





    return 0;
}
