#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{

    int _a = min(a, b);
    int _b = max(a, b);
    if (_a == 0)
    {
        return _b;
    }
    return gcd(_b % _a, _a);
}

int gcd_array(int ar[], int n)
{
    int max_gcd = 0;
    for (int j = 0; j < n; j++)
    {
        int temp = ar[j];
        ar[j] = 0;
        int res = ar[0];
        for (int i = 1; i < n; i++)
        {
            res = gcd(ar[i], res);
        }
        ar[j] = temp;
        max_gcd = max(max_gcd, res);
    }
    return max_gcd;
}

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    cout << gcd_array(ar, n);
    return 0;
}
