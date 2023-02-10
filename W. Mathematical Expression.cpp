#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, op, total1, total2, total3;
    char op1, op2;
    cin >> num1 >> op1 >> num2 >> op2 >> num3;
    total1 = num1 + num2;
    total2 = num1 - num2;
    total3 = num1 * num2;

    switch (op1)
    {
    case '+':
        if (total1 == num3)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << total1 << endl;
        }
        break;
    case '-':
        if (total2 == num3)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << total2 << endl;
        }
        break;
    case '*':
        if (total3 == num3)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << total3 << endl;
        }
        break;
    }
}