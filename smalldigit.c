#include <stdio.h>
#include <math.h>
#include <limits.h>

#define DIGITS_TO_REMOVE 3 // Assumed to be positive

int recurse(int* foo, int begin, int end, int previous, int max){
    int m;
    int min = begin;

    for (m= begin; m<= end; ++m)
    {
        if (foo[min] > foo[m]){
            min = m;
        }
    }

    return previous * pow(10, max - end + 1) + (max > end ? recurse(foo, min + 1, end + 1, foo[min], max) : foo[min]);
}

int main(void) {
    int foo[(const int)ceil(log10(INT_MAX))];
    int bar = 24635; // Assumed to be larger than pow(10, DIGITS_TO_REMOVE) - 1
    int size = ceil(log10(bar));
    int m;
    int min = size - DIGITS_TO_REMOVE;

    for (m = 1; bar > 0; bar /= 10, ++m){
        foo[size - m] = bar % 10;

        if (m >= DIGITS_TO_REMOVE && foo[size - m] <= foo[min]){
            min = size - m;
        }
    }

    printf("%d", recurse(foo, min + 1, DIGITS_TO_REMOVE + 1, foo[min], size - 1));
    return 0;
}
