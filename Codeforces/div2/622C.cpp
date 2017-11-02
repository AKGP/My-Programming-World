#include <iostream>
#include <vector>
#include <algorithm>
#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;
int main(){
	long n,m;
	cin>>n>>m;
	long ar[n];
	for(long i =0;i<n;i++){
		cin>>ar[i];
	}
		long l,r,x;
	for(long j =0;j<m;j++){
	
		cin>>l>>r>>x;
		l--;
		r--;
		long ans = -1;
		for(long k =r;k>=l;k--){
			if(ar[k]!=x){
				ans = k;
				break;
			}
		}
		if(ans>=0){
		cout<<ans+1<<endl;}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}