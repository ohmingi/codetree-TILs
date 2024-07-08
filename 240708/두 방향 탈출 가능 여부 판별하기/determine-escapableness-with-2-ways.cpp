#include <iostream>
using namespace std;

#define mnum  100

int n, m;
int grid[mnum][mnum];
bool visited[mnum][mnum];

bool inrange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < m;
}

bool go(int x, int y){
    if (!inrange(x, y) || visited[x][y] || grid[x][y] == 0) {
        return false;
    }
    return true;
}

void dfs(int x, int y){
    // 도착 지점에 도달했을 경우
    if (x == n-1 && y == m-1) {
        cout << "1"; // 목적지에 도달한 후에 한 번만 출력
        visited[x][y] = true; // 방문 처리
        return;
    }

    visited[x][y] = true; // 현재 위치 방문 처리

    // 오른쪽과 아래쪽으로만 이동
    int dx[2] = {0, 1};
    int dy[2] = {1, 0};

    for (int i = 0; i < 2; ++i) {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if (go(new_x, new_y)) {
            dfs(new_x, new_y); // 재귀적으로 이동
            return; // 목적지에 도달한 후에는 추가 탐색을 멈추고 함수 종료
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int t = 0; t < m; ++t) {
            int a;
            cin >> a;
            grid[i][t] = a;
        }
    }

    // 시작점 (0, 0)에서 DFS 시작
    dfs(0, 0);

    return 0;
}