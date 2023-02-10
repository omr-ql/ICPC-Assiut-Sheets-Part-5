#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;
    int Modnum1 = num1 % 100;
    int Modnum2 = num2 % 100;
    int Modnum3 = num3 % 100;
    int Modnum4 = num4 % 100;

    int result = Modnum1 * Modnum2 * Modnum3 * Modnum4;

    if ((result % 100) <= 9)
    {
        cout << "0" << (result % 100) << endl;
    }
    else
    {
        cout << (result % 100) << endl;
    }
}