#include <cmath>

int divideTwoIntegers(int dividend, int divisor) {
    if(dividend > pow(2, 31) - 1)
        return pow(2, 31) - 1;
    if(divisor < pow(-2, 31))
        return pow(-2, 31);

    int count = 0;
    int signal = 1;
    if(divisor < 0)
    {
        divisor*=-1;
        signal = -1;
    }
    if(dividend < 0)
    {
        dividend *= -1;
        signal *= -1;
    }

    for(int x = dividend - divisor; x >= 0; x-=divisor)
        count++;

    return count*signal;
}