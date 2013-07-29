//
//  main.c
//  NextPrime
//
//  Created by James Bucanek and Dave Mark on 7/4/12.
//  Copyright (c) 2012 Apress. All rights reserved.
//

//                          Modify NextPrime to compute the first 100 prime numbers.

#include <stdio.h>
#include <stdbool.h>	//This is to include the definition of true, false, and bool
#include <math.h>		//This is to include the definition of sqrt()


int main(int argc, const char * argv[])
{
    bool    isPrime;
	int     candidate, last, i, primeCounter;
    
    printf("The first 100 prime numbers\n");
    
    candidate = 1;
    primeCounter = 1;
    
    while (primeCounter <= 100) {
        isPrime = true;
        last = sqrt(candidate);
        
        for (i = 3; (i <= last) && isPrime; i += 2) {
            if (( candidate % i ) == 0) {
                isPrime = false;
            }
        }
        
        if (isPrime) {
            printf("%d is prime number %d\n", candidate, primeCounter);
            primeCounter++;
        }
        
        candidate += 2;
    }
    
	return 0;
}

