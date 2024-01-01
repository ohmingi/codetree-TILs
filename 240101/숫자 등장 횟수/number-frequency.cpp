#include <iostream>
#include <vector>

using namespace std;


int main(){
	int n,m;
	cin >> n >> m;
	
	vector<int> v;
	
	while(n--){
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	
	while(m--){
		int a;
		int count=0;
		
		cin >> a;
		
		vector<int>::iterator iter=v.begin();
	
		for(iter;iter!=v.end();iter++){
			if(*iter==a){
				count++;
			}
		}
		
		cout << count <<" ";
	}
}