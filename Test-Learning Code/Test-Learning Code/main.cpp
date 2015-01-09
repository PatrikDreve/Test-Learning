//
//  main.cpp
//  Test-Learning Code
//
//  Created by Patrik Drevestedt on 2015-01-09.
//  Copyright (c) 2015 WorkhorsePS. All rights reserved.
//

#include <iostream>

//Testande av Structar

struct CAR {
    char brand[10];
    int doors;
    char reg[7];
};

int main(void) {
    
    int array[20], i, n;
    char buf[10];
    struct CAR bil;
    
    i = 0;
    bil.doors = 4;
    n = 42;
    
    strcpy(buf, "Kalle");
    strcpy(bil.brand, "Volvo");
    strcpy(bil.reg, "ABC123");
    
    
    return 0;
}