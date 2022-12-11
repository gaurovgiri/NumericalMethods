#include <iostream>
#include <cmath>

#define f(x) (x * x - 4 * x - 10)
#define e 0.00008

using namespace std;

int main()
{
    float x_3, x_1, x_2;

    cout << "Initial Guesses: " << endl;
    cout << "x1: ";
    cin >> x_1;
    cout << "x2: ";
    cin >> x_2;

    do
    {
        x_3 = (x_1 * f(x_2) - x_2 * f(x_1)) / (f(x_2) - f(x_1));

        x_1 = x_2;
        x_2 = x_3;
    } while (fabs(x_2 - x_1) > e);

    cout << "The root is " << x_3 << endl;
    
    return 0;
}