#include <iostream>

#define f(x, y, z) (-2*z/x + x*x)

using namespace std;

int main()
{
    float x_0, y_0, z_0, h, x_p;
    float k1_y, k2_y, k3_y, k4_y, k_y, y1;
    float k1_z, k2_z, k3_z, k4_z, k_z, z1;
    cout << "Enter the intial conditions: \n";
    cout << "x_0: ";
    cin >> x_0;
    cout << "y_0: ";
    cin >> y_0;
    cout << "z_0: ";
    cin >> z_0;
    cout << "Step Size: ";
    cin >> h;
    cout << "x_p: ";
    cin >> x_p;

    int n = (x_p - x_0) / h;

    for (int i = 1; i <= n; i++)
    {
        k1_y = z_0;
        k1_z = f(x_0, y_0, z_0);
        k2_y = z_0 + k1_z * h / 2;
        k2_z = f(x_0 + h / 2, y_0 + k1_y * h / 2, z_0 + k1_z * h / 2);
        k3_y = z_0 + k2_z * h / 2;
        k3_z = f(x_0 + h / 2, y_0 + k2_y * h / 2, z_0 + k2_z * h / 2);
        k4_y = z_0 + k3_z * h;
        k4_z = f(x_0 + h, y_0 + k3_y * h, z_0 + k3_z * h);
        k_y = (k1_y + 2 * k2_y + 2 * k3_y + k4_y) / 6;
        k_z = (k1_z + 2 * k2_z + 2 * k3_z + k4_z) / 6;
        y1 = y_0 + k_y * h;
        z1 = z_0 + k_z * h;
        x_0 += h;
        y_0 = y1;
        z_0 = z1;
    }

    cout << "Result: " << y_0 << endl;
}
