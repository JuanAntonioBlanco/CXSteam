#include <stdio.h>
#include "CXSTEAM.h"

int main() {
    double T = 274;
    double p = 0.1;
    double h = 1000.0;
    double s = 100.0;
    double rho = 1000.0;
    double x = 0.5;

    double result1 = p_hrho(hV_p(4),rhoV_p(4));


    printf("Result 1: %f \n", result1);

    return 0;
}
