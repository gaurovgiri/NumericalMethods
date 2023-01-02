#include <bits/stdc++.h>

#define E 0.0008

using namespace std;

int main()
{
    float A[10][10], Y[10], X[10];
    float k_old = 0, k_new = 0;
    int m, n;
    cout << "Enter the order of matrix A: ";
    cin >> n >> m;

    cout << "Enter Elements of Matrix A: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "A[" << i + 1 << "][" << j + 1 << "]= ";
            cin >> A[i][j];
        }
        cout << endl;
    }

    cout << "Enter the inital guess of eigen vector: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> X[i];
    }

Eval:
    for (int i = 0; i < n; i++)
    {
        Y[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            Y[i] += A[i][j] * X[j];
        }
    }

    k_new = Y[0];
    for (int i = 0; i < 3; i++)
    {
        if (fabs(Y[i]) > k_new)
        {
            k_new = fabs(Y[i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        X[i] = Y[i] / k_new;
    }

    if ((k_new - k_old) > E)
    {
        k_old = k_new;
        goto Eval;
    }
    else
    {
        cout << "Eigen Value: " << k_new << endl;
        cout << "Eigen Vector: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << X[i] << endl;
        }
    }
}