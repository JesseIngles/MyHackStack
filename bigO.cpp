#include <iostream>
#include <iomanip>
#include <cmath>
#define pi 3.14159265358979323846

using namespace std;

void constFunc(int radius) {
    cout << "A=" << fixed << setprecision(4) << pi * pow(radius, 2) << endl;
}

int linearFunc(int x, int y) {
    int sum = 0;
    int max = ((x + y) + abs(x - y))/2;
    int min = ((x + y) - abs(x - y))/2;

    for(int i = min + 1; i < max; i++)
        if(i%2!=0) sum+=i;

    return sum;
}

int linearLogarathimicFunc(int n) {
    if(n == 1 | n == 0) return n;

    return n * linearLogarathimicFunc(n - 1);
}



