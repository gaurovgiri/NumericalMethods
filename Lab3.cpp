// Gauss Jordan Method

#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter the no of equations: ";
    cin >> n;

    float aug_matrix[n][n + 1];
    float pivot, fact;
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Equation " << i + 1 << endl;
        cout << "x: ";
        cin >> aug_matrix[i][0];
        cout << "y: ";
        cin >> aug_matrix[i][1];
        cout << "z: ";
        cin >> aug_matrix[i][2];
        cout << "X: ";
        cin >> aug_matrix[i][3];
    }

    for (int k = 0; k < n; k++)
    {
        pivot = aug_matrix[k][k];

        for (int j = 0; j <= n; j++)
        {
            aug_matrix[k][j] /= pivot;
        }

        for (i = 0; i < n; i++)
        {
            fact = aug_matrix[i][k];
            if (i != k)
            {
                for (int j = 0; j <= n; j++)
                {
                    aug_matrix[i][j] = aug_matrix[i][j] - (fact * aug_matrix[k][j]);
                }
            }
        }
    }
    cout << "Solution: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "X[" << i+1 << "] = " << aug_matrix[i][3] << endl;
    }

}