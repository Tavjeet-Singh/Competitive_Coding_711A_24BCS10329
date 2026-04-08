#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    multiset<int> price;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        price.insert(h);
    }
    vector<int> mx_price;
    for(int i=0;i<m;i++){
        int t;
        cin>>t;
        mx_price.push_back(t);
    }
    for(int i=0;i<m;i++){
        int t = mx_price[i];
        auto it = price.upper_bound(t);
        if(it == price.begin()){
            cout<<-1<<"\n";
        } 
        else{
            it--;
            cout<<*it<<"\n";
            price.erase(it);
        }
    }
    return 0;
}
