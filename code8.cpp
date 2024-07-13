#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    // Base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

// Driver code
int main()
{
    int a = 98, b = 56;
    cout << "GCD of " << a << " and " << b << " is "
         << gcd(a, b);
    return 0;
}