#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

class Substitute
{
  public:
    int getValue(string key, string code)
    {   vector<int> V;
        map<char, int> M;
        map<char,int>::iterator it;
        map<char,int>::iterator tempit;
        for(int i =0;i<key.length();i++){
            if(i==9){
                M.insert(pair<char,int>(key[i],0));
            }
            else{
                M.insert(pair<char,int>(key[i],i+1));
            }
        }
        for(int i = 0;i<code.length();i++){
            it = M.find(code[i]);
            if(it!=M.end()){
                V.push_back(it->second);
            }
        }
        int res = 0;
        int ans = 0;
        int n = V.size();
        int t = n-1;
        for(int i =0;i<V.size();i++){
            res = V[i];
            while(t--){
                res=res*10;
            }
            ans+=res;          
            n--;
            t = n-1;
        }
        return ans;
    }
};

int main()
{
    Substitute s1;
    string key, code;
    cin >> key;
    cin >> code;
    cout<<s1.getValue(key, code);
}