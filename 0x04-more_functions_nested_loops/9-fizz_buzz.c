#include "main.h"
#include <stdio.h>
/**
 * FizzBuzz
 *
 * A program that prints the numbers from 1 to 100.
 * Multiples of three print “Fizz” and multiples of five print “Buzz”.
 * For numbers which are multiples of both three and five print “FizzBuzz”.
 */

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0){
            printf("Buzz\n");
        } else {
            printf("%u\n", i);
        }
    }
    return 0;
}
