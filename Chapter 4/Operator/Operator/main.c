//
//  main.c
//  Operator
//
//  Created by Jared Sorge on 7/27/13.
//  Copyright (c) 2013 Jared Sorge. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int myInt;
    
    myInt = 3 * 2;
    printf("myInt ---> %d\n", myInt);
    
    myInt += 1;
    printf("myInt ---> %d\n", myInt);
    
    myInt -= 5;
    printf("myInt ---> %d\n", myInt);
    
    myInt *= 10;
    printf("myInt ---> %d\n", myInt);
    
    myInt /= 4;
    printf("myInt ---> %d\n", myInt);
    
    myInt /= 2;
    printf("myInt ---> %d\n", myInt);
    
    return 0;
}

