#include <iostream>

using namespace std;

int x = 10;

int Fun1()
{
    int y = x + 10;
    return y;
}

int Fun2()
{
    int x = 100;
    return x;
}

int main()
{
    cout << "y = " << Fun1() << endl;
    cout << "x = " << Fun2() << endl;
    cout << "x = " << x << endl;

    return 0;
}