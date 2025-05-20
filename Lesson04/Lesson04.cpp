#include <stdio.h>

int main()
{
    // 비트연산자 : <<, >>, &, |, ~(not), ^(eXcluive OR)
    short n3 = 0;
    short n1 = 3; // 0011
    short n2 = 5; // 0101
    // n3 = n1 & n2; // 0001 bit and
    //printf("n3 = %d\n", n3); 
    n3 = n1 | n2; // 0111 bit or
    printf("n3 = %d\n", n3);

    n3 = ~n1;
    printf("n3 = %d\n", n3);

    // XOR
    n3 = n1 ^ n2;
    printf("n3 = %d\n", n3);

    // 0011
    n3 = n1 << 2; // n1을 왼쪽으로 2비트 이동시킨
    printf("n3 = %d\n", n3);

    n3 = n2 >> 2; // n2을 오른쪽으로 2비트 이동시킨 음수일 경우 부호가 바뀌지 않음 
    printf("n3 = %d\n", n3);




    return 0;
}

