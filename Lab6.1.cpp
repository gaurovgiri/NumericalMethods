// Linear Regression
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    float sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;
    float x[20], y[20];
    cout << "Enter the no of points: ";
    cin >> n;

    cout << "Enter the data: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "x: ";
        cin >> x[i];
        cout << "y: ";
        cin >> y[i];
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        sum_x = sum_x + x[i];
        sum_y = sum_y + y[i];
        sum_xy = sum_xy + x[i] * y[i];
        sum_x2 = sum_x2 + x[i] * x[i];
    }

    float b = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    float a = (sum_y/n) - (b * sum_x/n);

    cout << "y = " << a << " + " << b << "x" << endl;
 
}