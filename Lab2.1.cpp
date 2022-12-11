#include <iostream>
#include <cmath>

#define f(x) (sin(x) - 0.5 * x)
#define g(x) (cos(x) - 0.5)
#define e 0.0008

using namespace std;

int main()
{
    float x_0, x_1, err;

    do
    {
        cout << "Initial Guess: ";
        cin >> x_0;
    } while (g(x_0) == 0);

    do
    {
        x_1 = x_0 - (f(x_0) / g(x_0));
        err = fabs(x_1 - x_0);
        x_0 = x_1;
    } while (err > e);


    cout << "The root is " << x_1 << endl;
    
    return 0;
}