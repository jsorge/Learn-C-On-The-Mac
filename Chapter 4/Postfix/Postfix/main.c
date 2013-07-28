//
//  main.c
//  Postfix
//
//  Created by Jared Sorge on 7/27/13.
//  Copyright (c) 2013 Jared Sorge. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int myInt;
    
    myInt = 5;
    
    myInt = myInt * 3;
    printf("myInt ---> %d\n", myInt);
    
    printf("myInt ---> %d\n", myInt);
    myInt++;
    
    ++myInt;
    printf("myInt ---> %d\n", myInt);
    
    return 0;
}

