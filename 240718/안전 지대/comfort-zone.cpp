#include <iostream>
#include <cstring>

#define maxn 50

using namespace std;

int n,m;
int k = 1;

int newx[4]={0,0,1,-1};
int newy[4]={1,-1,0,0};

int grid[maxn][maxn];
bool visited[maxn][maxn];

bool judge(int x, int y){
    return 0 <= x && x < n && 0 <= y && y<m;
}

void dfs(int x, int y){
    for(int i=0 ;i<4 ;i++){
        int xx = newx[i] + x;
        int yy = newy[i] + y;

        if(visited[xx][yy] == 0 && judge(xx,yy) && grid[xx][yy] > k){
            visited[xx][yy] = 1;
            dfs(xx,yy);
        }
    }
}

int main() {
    cin >> n >> m;

    int big = 1;

    for(int i=0;i<n;i++){
        for(int t=0;t<m;t++){
            int a;
            cin >> a;

            grid[i][t] = a;
            big = max(big, grid[i][t]);
        }
    }

    int count = 0;
    int result = 0;
    int aa;

    for(k;k<big;k++){
        count = 0;
        memset(visited, false, sizeof(visited));
        for(int i=0;i<n;i++){
            for(int t=0;t<m;t++){
                if(visited[i][t] == 0 && grid[i][t] > k){
                    visited[i][t] = 1;
                    dfs(i,t);
                    count++;
                }
            }
        }
        if(count > result){
            result=count;
            aa = k;
        }
    }

    cout << aa <<" " << result;

    return 0;
}