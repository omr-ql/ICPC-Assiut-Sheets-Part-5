#include <iostream>
using namespace std;
int main()
{
    double num;
    cin >> num;
    int IntNum = num;
    double res = num - IntNum;
    if (res > 0)
    {
        cout << "float " << IntNum << " " << res << endl;
    }
    else
    {
        cout << "int " << IntNum << endl;
    }
}