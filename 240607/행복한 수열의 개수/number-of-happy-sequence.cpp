#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][n];

    // 배열 입력 받기
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int count = 0;

    // m이 1일 때
    if (m == 1) {
        cout << 2 * n;
        return 0;
    }

    // 각 행과 열에서 연속된 숫자가 m번 나타나는지 확인
    for (int i = 0; i < n; i++) {
        int cntRow = 1, cntCol = 1;
        for (int j = 1; j < n; j++) {
            if (arr[i][j] == arr[i][j - 1]) cntRow++;
            else cntRow = 1;
            if (arr[j][i] == arr[j - 1][i]) cntCol++;
            else cntCol = 1;
            if (cntRow == m) count++;
            if (cntCol == m) count++;
        }
    }

    cout << count;
    return 0;
}