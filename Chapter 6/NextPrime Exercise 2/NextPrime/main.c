//
//  main.c
//  NextPrime
//
//  Created by James Bucanek and Dave Mark on 7/4/12.
//  Copyright (c) 2012 Apress. All rights reserved.
//

//                      Modify NextPrime to compute the prime numbers from 1 to 100.

#include <stdio.h>
#include <stdbool.h>	//This is to include the definition of true, false, and bool
#include <math.h>		//This is to include the definition of sqrt()


int main(int argc, const char * argv[])
{
    bool    isPrime;
	int     candidate, last, i;
    
    printf("Prime numbers between 1 and 100\n");
    
    for (candidate = 3; candidate <= 100; candidate += 2) {
        isPrime = true;
        last = sqrt(candidate);
        
        for (i = 3; (i <= last) && isPrime; i += 2) {
            if ((candidate % i) == 0) {
                isPrime = false;
            }
        }
        
        if (isPrime) {
            printf("%d is prime\n", candidate);
        }
    }
    
    
	return 0;
}

