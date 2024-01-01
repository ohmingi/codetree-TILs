#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v;

    while (n--) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    unordered_map<int, int> countMap;
    for (int num : v) {
        countMap[num]++;
    }

    while (m--) {
        int a;
        cin >> a;

        int count = countMap[a];
        cout << count << " ";
    }

    return 0;
}