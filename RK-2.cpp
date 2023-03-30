// RK-2 Method

#include <iostream>

#define f(x, y) ((2 * y) / x)

using namespace std;

int main()
{
    float x_0, y_0, h, x_p;
    float m1, m2, m, y1, x1;
    cout << "Enter the intial conditions: \n";
    cout << "x_0: ";
    cin >> x_0;
    cout << "y_0: ";
    cin >> y_0;
    cout << "Step Size: ";
    cin >> h;
    cout << "x_p: ";
    cin >> x_p;

    int n = (x_p - x_0) / h;

    for (int i = 1; i <= n; i++)
    {
        m1 = f(x_0, y_0);
        m2 = f((x_0 + h), (y_0 + m1 * h));
        m = (m1 + m2) / 2;
        y1 = y_0 + m * h;
        x1 = x_0 + h;
        x_0 = x1;
        y_0 = y1;
    }

    cout << "Result: " << y_0 << endl;
}