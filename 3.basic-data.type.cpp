#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int integer;
    long longer;
    char car;
    float flo;
    double dob;
    scanf(" %d  %ld  %c  %f  %lf  ", &integer, &longer, &car, &flo, &dob );
    printf("%d \n", integer );
    printf("%ld \n", longer);
    printf("%c \n", car);
    printf("%0.3f \n", flo);
    printf("%0.9lf \n", dob);
   
    return 0;
}
