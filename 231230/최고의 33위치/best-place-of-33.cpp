#include <iostream>

using namespace std;

int n;
int** arr;
int result = 0;

void check(int i, int t) {
    int count = 0;

    if (arr[i][t] == 1) {
        count++;
    }
    if (arr[i - 1][t - 1] == 1) {
        count++;
    }
    if (arr[i - 1][t] == 1) {
        count++;
    }
    if (arr[i - 1][t + 1] == 1) {
        count++;
    }
    if (arr[i][t - 1] == 1) {
        count++;
    }
    if (arr[i][t + 1] == 1) {
        count++;
    }
    if (arr[i + 1][t - 1] == 1) {
        count++;
    }
    if (arr[i + 1][t] == 1) {
        count++;
    }
    if (arr[i + 1][t + 1] == 1) {
        count++;
    }
    if (count > result) {
        result = count;
    }
}

int main() {
    cin >> n;

    arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
        for (int t = 0; t < n; ++t) {
            int a;
            cin >> a;
            arr[i][t] = a;
        }
    }

    for (int i = 1; i < n - 1; ++i) {
        for (int t = 1; t < n - 1; ++t) {
            check(i, t);
        }
    }

    cout << result << "\n";

    // 동적으로 할당된 메모리 해제
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}