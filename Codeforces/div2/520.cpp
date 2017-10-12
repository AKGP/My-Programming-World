#include <iostream>
#include <algorithm>
using namespace std;

int lookup[10000];
int minDist = 99999;
void f(int n,int m, int l){
    cout<<n<<" "<<l<<endl;
    if(n==m){
        
        minDist = min(minDist,l);
    }
    else if(n>m&&!lookup[n]){
        lookup[n] = 1;
        minDist = min(minDist,l+n-m);
        // return minDist;
    }
    else if(n>0&&(!lookup[n])){
        if(n!=m){
            lookup[n] = 1;
            f(n*2,m,l+1);
            f(n-1,m,l+1);
        }
    }
}

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    f(n,m,0);
    cout<<minDist;
    return 0;
}