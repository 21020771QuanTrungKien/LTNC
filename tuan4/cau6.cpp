#include <bits/stdc++.h>

double calculate(double num1, char operate, double num2) {
    double res = 0.0;
    switch (operate) {
    case '+':
        res = num1 + num2;
        return res;
        break;
    case '-':
        res = num1 - num2;
        return res;
        break;
    case '*':
        res = num1 * num2;
        return res;
        break;
    case '/':
        res = num1 / num2;
        return res;
        break;
    }
}

