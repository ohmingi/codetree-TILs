#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n,k;
	
	cin >> n >> k;
	
	vector<int> v;
	
	int count=0;
	
	while(n--){
		int a;
		cin >> a;
	
		if(v.empty()){
			v.push_back(a);
		
			continue;
		}
		
		for(int i=0;i<v.size();i++){
			if((v[i]+a)==k){
				count++;
				break;
			}
		}
		
		v.push_back(a);
		
	}
	
	cout << count;

}