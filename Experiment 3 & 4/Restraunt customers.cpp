#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> times;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		times.push_back({a,1});
		times.push_back({b,-1});
	}
	sort(times.begin(),times.end());
	int mx_count=0, curr=0;
	for(auto t: times){
		curr+=t.second;
		mx_count=max(mx_count,curr);
	}
	cout<<mx_count<<endl;
	return 0;
}
