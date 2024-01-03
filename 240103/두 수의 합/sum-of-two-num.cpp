#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    unordered_map<int, int> valueCount;

    int count = 0;

    while (n--) {
        int a;
        cin >> a;

       
        int complement = k - a;
        count += valueCount[complement];
		
        
        valueCount[a]++;
    }

    cout << count;

    return 0;
}