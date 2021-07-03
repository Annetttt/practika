
#include <string>
#include <iostream>
using namespace std;

int MaxFunc(int, int);

int main()
{
    int a = 1, b = 1, c;
    cout << "Test 1:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 9, b = 7000;
    cout << "Test 2:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 1, b = 7000;
    cout << "Test 3:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 9, b = 1;
    cout << "Test 4:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 2, b = 1034;
    cout << "Test 5:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 4, b = 5555;
    cout << "Test 6:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 5, b = 202;
    cout << "Test 7:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 6, b = 6999;
    cout << "Test 8:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 7, b = 5;
    cout << "Test 9:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    a = 8, b = 86;
    cout << "Test 10:\n" << a << " " << b << endl;
    c = MaxFunc(a, b);
    cout << c << endl;

    return 0;
}

