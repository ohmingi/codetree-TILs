#include <iostream>
#include <vector>
#include <set>

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

    set<int> s(v.begin(), v.end());

    while (m--) {
        int a;
        cin >> a;

        int count = s.count(a);
        cout << count << " ";
    }

    return 0;
}