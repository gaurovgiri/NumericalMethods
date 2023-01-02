// Lagrange Interpolation

#include <iostream>

using namespace std;

int main()
{
    int n;
    float x[20], f[20];
    float prod, sum = 0;
    float x_p;

    cout << "Enter the number of points: ";
    cin >> n;


    cout << "Enter the data: \n ";
    for (int i = 1; i <= n; i++)
    {
        cout << "x: ";
        cin >> x[i];
        cout << "f(x): ";
        cin >> f[i];
        cout << endl;
    }

    cout << "Enter the interpolation point: ";
    cin >> x_p;

    for (int i = 1; i <= n; i++)
    {
        prod = 1;
        for (int j = 1; j <= n; j++)
        {
            if (i != j)
                prod = prod * ((x_p - x[j]) / (x[i] - x[j]));
        }
        sum = sum + prod * f[i];
    }

    printf("f(%f) = %f \n", x_p, sum);
}