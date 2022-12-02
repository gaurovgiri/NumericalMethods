// Lab 1 : BISECTION METHOD

/*
    Algorithm:

        1. Start
        2. Define function f(x) and error E
        3. Read initial values x1 & x2 and find f(x1) & f(x2)
        4. Check the bracketing condition
            if f(x1) * f(x2) > 0; go to step 3

        5. Calculate mid-point  xₘ = (x1 + x2)/2 and find f(xₘ)

        6. if |x2-x1| < E; go to step 8

        7. if f(xₘ) * f(x1) < 0
            set x2 = xm
                f(x2) = f(xₘ)

           else
            set x1 = xm
            f(x1) = f(xₘ)

        go to step 5

    8. point the mid-point xₘ asroot
    9. stop


*/

#include <iostream>
#include <cmath>

#define f(x) (x * x - 4 * x - 10)
#define E 0.0001

using namespace std;

bool isBracketing(float x1, float x2)
{
    if (f(x1) * f(x2) > 0)
        return false;
    else
        return true;
}

int main()
{

    float x1, x2, x_mid;
    bool bracketing = false;

    while (!bracketing)
    {
        cout << "Initial Guesses: " << endl;
        cout << "x1: ";
        cin >> x1;
        cout << "x2: ";
        cin >> x2;

        bracketing = isBracketing(x1, x2);
    }

    do
    {
        x_mid = (x1 + x2) / 2;

        if (!isBracketing(x_mid,x2))
        {
            x2 = x_mid;
        }
        else
        {
            x1 = x_mid;
        }
    }
    while(fabs(x2-x1)>E);

    cout << "The root is: " << x_mid;

    return 0;
}
