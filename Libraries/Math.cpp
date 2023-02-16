//
// Created by Dundee Zhang on 2023-02-16.
//

#include "Math.h"

double Math::addition(double *numbers) {
    double sum = 0;
    for(int i = 0; i < sizeof(numbers) {
        sum += numbers[i];
    }
    return sum;
}

double Math::subtraction(double *numbers) {
    double difference = 0;

    for(int i = 0; i < sizeof(numbers); i++) {
        difference += numbers[i];
    }
    return difference;
}

double Math::division(double *numbers) {
    double quotient = numbers[0] / numbers[1];
    return quotient;
}



