#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque <int> v;
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int x;
        cin>>x;
        v.push_back(x);
        i++;
    }

    //Empty it if increasing
    int j = 0;
    if(j+1<v.size()){
        while(v[j]<v[j+1]){
            v.pop_front();
            j++;
        }
        v.pop_front();
    }

    for(int k = 0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
    cout<<endl;
    j=0;
    if(j+1<v.size()){
        while(v[j]==v[j+1]){
            v.pop_front();
            j++;
        }
    }
    for(int k = 0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
    cout<<endl;
    j=0;
    if(j+1<v.size()){
        while(v[j]>v[j+1]){
            v.pop_front();
            j++;
        }
    }

    for(int k = 0;k<v.size();k++){
        cout<<v[k]<<" ";
    }

    if(v.size()==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}