#include <iostream>
#include <vector>
#include <cmath>

double f(double x, double y) {
    return y * y;
}

double runge_kutta_4(double x0, double y0, double h, double x_end) {
    double x = x0;
    double y = y0;
    double k1, k2, k3, k4;
    while (x < x_end) {
        k1 = h * f(x, y);
        k2 = h * f(x + 0.5 * h, y + 0.5 * k1);
        k3 = h * f(x + 0.5 * h, y + 0.5 * k2);
        k4 = h * f(x + h, y + k3);
        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        x = x + h;
    }
    return y;
}

int main() {
    double x0 = 0;
    double y0 = 1;
    double h = 0.1;
    double x_end = 5;
    double result = runge_kutta_4(x0, y0, h, x_end);
    std::cout << "The approximate value of y at x = " << x_end << " is: " << result << std::endl;
    return 0;
}