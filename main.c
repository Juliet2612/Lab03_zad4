#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int main(int argc, char* argv[]) {
    fflush(stdout);
    SetConsoleOutputCP(CP_UTF8);
    puts("Wybrane funkcje biblioteki matematycznej\n");
    printf("sqrt(100.0) to %.2f\n", sqrt(100.0));
    printf("cbrt(27.0) to %.2f\n", cbrt(27.0));
    printf("exp(1.0) to %f\n", exp(1.0));
    printf("log(e) to %.2f\n", log(M_E));
    printf("log10(100.0) to %.2f\n", log10(100.0));
    printf("fabs(-2.5) to %.2f\n", fabs(-2.5));
    printf("ceil(9.3) to %.2f\n", ceil(9.3));
    printf("ceil(-9.3) to %.2f\n", ceil(-9.3));
    printf("floor(9.3) to %.2f\n", floor(9.3));
    printf("floor(-9.3) to %.2f\n", floor(-9.3));
    printf("pow(2, 10) to %.2f\n", pow(2, 10));
    printf("fmod(13.657, 2.333) to %.3f\n", fmod(13.657, 2.333));
    printf("sin(0.0) to %.2f\n", sin(0.0));
    printf("sin(\u03C0/2) to %.2f\n", sin(M_PI_2));
    printf("cos(0.0) to %.2f\n", cos(0.0));
    printf("cos(\u03C0/2) to %.2f\n", cos(M_PI_2));
    printf("tan(0.0) %.2f\n", tan(0.0));
    printf("tan(\u03C0/4) %.2f\n", tan(M_PI_4));
    printf("tan(\u03C0/2) %e\n\n", tan(M_PI_2));
    system("pause");
    return 0;
}