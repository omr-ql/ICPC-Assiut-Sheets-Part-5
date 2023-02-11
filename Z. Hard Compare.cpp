#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double num1, num2, num3, num4, result1, result2;
    cin >> num1 >> num2 >> num3 >> num4;
    result1 = num2 * log(num1);
    result2 = num4 * log(num3);
    if (result1 > result2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}