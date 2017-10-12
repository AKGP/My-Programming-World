#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cmath>
#include <strstream>

using namespace std;

class TurretDefense
{
  public:
    int firstMiss(vector<int> xs, vector<int> ys, vector<int> times)
    {
        int n = xs.size();
        int ans = -1;
        int res = 0;
        int prevx = 0;
        int prevy = 0;
        int curtime = 0;
        int prevt = 0;
        for (int i = 0; i < n; i++)
        {
            curtime = abs((xs[i]+prevx)-(ys[i]+prevy));
            // cout<<curtime<<endl;
            if(curtime<times[i]-prevt){
                res++;
            }
            prevx = xs[i];
            prevy = ys[i];
            prevt = times[i];
        }
        if(res>0&&res<n){
             ans = res;
        }
        return ans;
    }
};

int main()
{
    TurretDefense td;
    int value;
    vector<int> xs, ys, times;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        xs.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ys.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        times.push_back(x);
    }
    cout<<td.firstMiss(xs, ys, times);
}