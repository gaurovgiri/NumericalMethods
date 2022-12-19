#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    float c;

    cout << "Enter the no of equations: ";
    cin >> n;

    float A[n][n + 1];
    float X[n];

    for (int i = 1; i <= n; i++)
    {
        cout << "Equation " << i + 1 << endl;
        cout << "x: ";
        cin >> A[i][1];
        cout << "y: ";
        cin >> A[i][2];
        cout << "z: ";
        cin >> A[i][3];
        cout << "X: ";
        cin >> A[i][4];
    }

    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i > j)
            {
                c = A[i][j] / A[j][j];

                for (int k = 1; k <= n + 1; k++)
                {
                    A[i][k] = A[i][k] - c * A[j][k];
                }
            }
        }
    }

    X[n] = A[n][n + 1] / A[n][n];

    float sum;

    for (int i = n - 1; i >= 1; i--)
    {
        sum = 0;
        for (int j = i + 1; j <= n; j++)
        {
            sum += A[i][j] * X[j];
        }
        X[i] = (A[i][n + 1] - sum) / A[i][i];
    }

    cout << endl;

    cout << "The solution is : " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << "X[" << i << "] " << X[i] << endl;
    }
}