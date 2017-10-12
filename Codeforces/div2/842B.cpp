#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
double dist(int x, int y)
{
    return sqrt(x * x + y * y);
}
int main()
{
    int r, d, n;
    cin >> r >> d;
    cin >> n;
    int ans = 0;
    int t = n;
    while (n--)
    {
        int x, y, ri;
        cin >> x >> y >> ri;
        double R = dist(x, y);
        // cout<<"distance from center "<<R<<endl;
        if(r>=R+ri&&r-d<=R-ri){
            ans++;
        }
    }
    cout<<ans<< endl;
    return 0;
}