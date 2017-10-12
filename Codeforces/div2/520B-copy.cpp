#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int mi = 99999;
int bfs(int n, int m, int l){
	vector <pair<int,int> > Q;
	Q.push_back(make_pair(n,l));
	while(!Q.empty()){
		if(Q[0].first==m){
			return Q[0].second;
		}

		int left = 2*(Q[0].first);
		int right = Q[0].first -1;
		// if(Q[0].first>m){
		// 	mi = min(Q[0].first-m+Q[0].second,min);
		// }
		if(left<2*m){
		Q.push_back(make_pair(left,Q[0].second+1));
		}
		else{
			mi = min(,min);
		}
		if(right>0){
			Q.push_back(make_pair(right,Q[0].second+1));
		}
		
		cout<<Q[0].first<<" ";
		Q.erase(Q.begin());
	}
}

int main(){

	int n,m;
	cin>>n;
	cin>>m;

	int l = bfs(n,m,0);
	cout<<l;
	return 0;
}