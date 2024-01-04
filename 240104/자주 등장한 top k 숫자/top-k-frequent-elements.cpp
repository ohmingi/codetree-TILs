#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
	if(a.second==b.second) return a.first>b.first;
	
	return a.second>b.second;

	
}

int main(){
	map<int,int> m;
	
	int n,k;
	
	cin >> n >> k;
	
	while(n--){
		int a;
		cin >> a;
		
		m[a]++;
	
	}
	
	vector<pair<int,int>> v(m.begin(),m.end());
	sort(v.begin(),v.end(),compare);
	
	for(int i=0;i<k;i++){
		cout << v[i].first <<" ";
	}

    return 0;

}