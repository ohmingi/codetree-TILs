#include <iostream>
using namespace std;

#define mnum  100

int n,m;

int grid[mnum][mnum];
bool visited[5][5];
bool check = 0;

bool inrange(int x, int y){
    return 0 <= x && x < n && 0 <= y && y < m;
}

bool go(int x, int  y){
    if(!inrange(x, y)){
        return false;
    }
    if(visited[x][y] || grid[x][y] == 0){
        return false;
    }
    return true;
}

void dfs(int x, int y){
    int dx[2] = {0,1};
    int dy[2] = {1,0};

    for(int i = 0; i < 2; i++){
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if(go(new_x,new_y)){
            if(new_x == n-1 && new_y == m-1){
                cout << 1;
                check = 1;
                return;
            }
            visited[new_x][new_y] = 1;
            dfs(new_x,new_y);
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i<5 ; i++){
        for(int t=0;t<5;t++){
            int a;
            cin >> a;
            grid[i][t] = a;
        }
    }
    //answer[0][0] = order++;
    visited[0][0] = 1;
    dfs(0,0);

    if(check == 0){
        cout << 0;
    }

    return 0;
}