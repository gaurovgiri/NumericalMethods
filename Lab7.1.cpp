// Simpson's 1/3 Rule
#include <iostream>

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

    for (int i = 1; i <= n - 1; i++)
    {
        x = a + i * h;
        if (i % 2 != 0)
        {
            sum_1 = sum_1 + 4 * f(x);
        }
        else
        {
            sum_2 = sum_2 + 2 * f(x);
        }
    }

    I_cs = (h / 3) * (f(a) + sum_1 + sum_2 + f(b));
    cout << "Result: " << I_cs << endl;
}