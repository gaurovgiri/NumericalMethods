// Simpson's 3/8 Rule
#include <iostream>
#include <cmath>


#define f(x) (x * x * x + 1)

using namespace std;

int main()
{
    float a, b, x, sum_1, sum_2, I_cs;
    int n;
    a = b = x = sum_1 = sum_2 = I_cs = n = 0;

    cout << "Enter lower range: ";
    cin >> a;
    cout << "Enter uppper range: ";
    cin >> b;

    cout << "Enter the no of segments: ";
    cin >> n;

    float h = (b - a) / (float)n;

    for (int i = 1; i <= n-1 ; i++)
    {
        x = a + i * h;
        if (i % 3 != 0)
        {
            sum_1 = sum_1 + 3 * f(x);
        }
        else
        {
            sum_2 = sum_2 + 2 * f(x);
        }
    }

    I_cs = (3 * h / 8) * (f(a) + sum_1 + sum_2 + f(b));
    
    cout << "Result: " << I_cs << endl;
}