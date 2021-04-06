#include <stdio.h>

int main()
{
    char ch1 = 'A';
    char ch2 = 65;
    unsigned char c = 127;
    c = c + 1;
    c = c + 1;

    int a = 10 / 3;
    double f = 2 /3.0 ;
    printf("%.30g\n", f);
//0.66666666666666663000
//0.66666666666666663
//0.66666666666666663

    int m1 = 5 % 2;
    int m2 = 13 % 10;
    int m3 = 123 % 10;
    return 0;
}