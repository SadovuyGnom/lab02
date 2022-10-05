#include <iostream>
using namespace std;

double main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
        << "A - B = " << a - b << '\n'
        << "A * B = " << a * b << '\n'
        << "A / B = " << a / b << '\n';
      if (a >= b) cout << a << '\n';
    else cout << b << '\n';
    if (a <= b) cout << a;
    else cout << b;

    return 0;
}
