#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int lookup[10000]; 

int f(int root, int num, int level)
{
    cout<<root <<" "<<num<<" "<<level<<endl;
    if (root == num)
    {
        return level;
    }
    if (root > num)
    {
        return level+root-num;
    }
    if (root == 0)
    {
        return 999999;
    }
    int right, left;
    if( lookup[root*2] == 0){
        right = f(root*2, num,level+1);
        lookup[root*2]=1;
    }
    return min(f(root * 2, num, level + 1), f(root - 1, num, level + 1));
    // if(n*2==m || n-1==m) return l;
    // return min(f(n*2,m,l+1),f(n-1,m,l+1));
}

int main()
{
    int n, m, temp;
    cin >> n;
    cin >> m;
    cout << f(n, m, 1);
    return 0;
}