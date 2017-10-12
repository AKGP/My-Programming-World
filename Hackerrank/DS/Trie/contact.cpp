#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

typedef struct trie{
    map<char,trie> M;
    bool endOfWord;
}Trie;

int main()
{
    int n;
    cin>>n;
    while(n--){
        Trie root;
        root.endOfWord = false;
        map<char,Trie>::iterator it;
        Trie temp;
        string query, text;
        cin>>query>>text;
        if(query=="add"){
            temp = root;
            for(int i =0;i<text.length();i++){
                it = root.M.find(text[i]);
                if(it==root.M.end()){
                    Trie child;
                    child.endOfWord = false;
                    root.M.insert(pair<char,trie>(text[i],child));
                    root = child;
                }
                else{
                    it = root.M.find(text[i]);
                    Trie child;
                    child.endOfWord = false;
                    child.M.insert(pair<char,trie>(text[i],it->second));
                }
            }
            root.endOfWord = true;
            root = temp;
        }
        if(query=="find"){
            for(int i =0;i<text.length();i++){
                it = root.M.find(text[i]);
                if(it==root.M.end()){
                   cout<<"Doesnot exist";
                }
                else {
                    root = root.M.find(text[i])->second;
                    if(i==text.length()-1){
                        cout<<"Exist";
                    }
                }
            }
        }
    }
    return 0;
}
