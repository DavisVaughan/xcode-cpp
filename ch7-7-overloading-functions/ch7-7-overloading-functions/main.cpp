//
//  main.cpp
//  ch7-7-overloading-functions
//
//  Created by Davis Vaughan on 1/11/18.
//  Copyright © 2018 Davis Vaughan. All rights reserved.
//

#include <iostream>
using namespace std;

const double PI = 3.14159;

// Overloading Area to have two different prototype signatures
// Must have the same name and return type
double Area(double radius);
double Area(double radius, double height);

int main() {
    
    cout << Area(10, 10) << endl;
    cout << Area(10) << endl;
    
    return 0;
}

// Implementation

// Circle
double Area(double radius) {
    return PI * radius * radius;
}

// Cylinder
double Area(double radius, double height) {
    return 2 * Area(radius) + 2 * PI * radius * height;
}
