//
//  main.cpp
//  ch7-12-lambda-functions
//
//  Created by Davis Vaughan on 1/11/18.
//  Copyright © 2018 Davis Vaughan. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void DisplayNums(vector<int>& dynArray);

int main(int argc, const char * argv[]) {
    
    // Initialize a vector of ints
    // Add 4 numbers onto it
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);
    
    // Print them
    DisplayNums(myNums);
    
    cout << endl;
    
    
    // sort(first, last, Compare comp)
    /* Definition of comp:
     Binary function that accepts two elements in the range as arguments, and returns a value convertible to bool. The value returned indicates whether the element passed as first argument is considered to go before the second in the specific strict weak ordering it defines.
     The function shall not modify any of its arguments.
     This can either be a function pointer or a function object.
    */
    // So for comp, you have to give it a lambda function with 2 arguments,
    // the first is the first element in the range, and the second is the next element following it
    // The return value of the lambda function must be true/false. If true, the first element
    // goes first, if false the second element goes first.
    sort(myNums.begin(), myNums.end(), \
         [](int num1, int num2) { return (num2 < num1); } );
    
    // Print them again
    DisplayNums(myNums);
    
    return 0;
}

// Implementation of our printer
void DisplayNums(vector<int>& dynArray) {
    
    // for_each(first, last, fn)
    // For each element in dynArray
    // starting at the beginning and going to the end
    // (I guess its actually pointing to the value?)
    // Print that element to the screen
    for_each(dynArray.begin(), dynArray.end(), \
             [](int Element) {cout << Element << " ";} );
    
    // Looking at the docs for for_each, we see that the third arg is
    // fn. Upon reading, we see that this is a function (or lambda function)
    // that should take 1 argument (the argument should be the same type as the elements of the
    // begin -> end range that you specify)
}
