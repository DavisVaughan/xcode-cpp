//
//  main.cpp
//  ch7-1
//
//  Created by Davis Vaughan on 1/11/18.
//  Copyright © 2018 Davis Vaughan. All rights reserved.
//

#include <iostream>
using namespace std;

const double PI = 3.14159;

// These are prototypes
// The compiler now recognizes that these are functions and valid C++ code
double Area(double radius);
double Circumference(double radius);

int main() {
    
    cout << "Area: " << Area(12.0) << endl;
    cout << "Circumference: " << Circumference(12.0) << endl;
    
    return 0;
}

// These link the functions to their implementations
double Area(double radius) {
    return PI * radius * radius;
}

double Circumference(double radius) {
    return PI * 2 * radius;
}
