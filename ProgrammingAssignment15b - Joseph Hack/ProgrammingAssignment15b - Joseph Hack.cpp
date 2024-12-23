// ProgrammingAssignment15b - Joseph Hack.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Joseph Hack
// CIS 1202
// December 8, 2024

#include <iostream>

using namespace std;

//Template for half function
template <typename T>
T half(T& var1) {
    T half;
    half = var1 / 2;
    return half;
}

//Half function specifically for int values
int half(int var1) {
    int half;
    half = round((float)var1 / 2.0);
    return half;
}


//Main tests double float and int values for half functions
int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}

