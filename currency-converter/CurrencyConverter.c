#include <stdio.h>

int main() {
    double valuesGBP[] = {1.00, 10.00, 20.00, 30.00, 40.00, 50.00, 60.00, 70.00, 80.00, 90.00, 100.00};
    int length = sizeof(valuesGBP) / sizeof(valuesGBP[0]);
    double exchangeRate = 1.13;

    printf("GBP     EUR\n");
    for (int i = 0; i < length; i++) {
        double newVal = valuesGBP[i] * exchangeRate;
        printf("%.2f %.2f\n", valuesGBP[i], newVal);
    }

    return 0;
}