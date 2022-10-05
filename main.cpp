#include <iostream>
using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
        << "A - B = " << a - b << '\n'
        << "A * B = " << a * b << '\n';
        if (a > b)
        cout << "Max = " << a;
    else
        cout << "Max = " << b;

    return 0;
}
