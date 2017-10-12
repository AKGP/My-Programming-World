#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;



int main(){
    long long l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    int ans = 0;
    for (int i = x; i <= y; i++)
    {
        if (l <= i * k && i * k <= r)
        {
            ans = 1;
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}