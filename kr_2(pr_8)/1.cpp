#include <iostream>


double fastPowerRecursive(double base, long long exp) {
    if (exp == 0) return 1.0;
    if (exp < 0) {
        base = 1.0 / base;
        exp = -exp;
    }
    
    double half = fastPowerRecursive(base, exp / 2);
    
    if (exp % 2 == 0) {
        return half * half;
    } else {
        return half * half * base;
    }
}

int main() {
    double base = 10;
    long long exp = 12;
    std::cout << base << "^" << exp << " = " << std::fixed << fastPowerRecursive(base, exp) << std::endl;
    return 0;
}