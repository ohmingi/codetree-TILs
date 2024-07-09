#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define maxm 25

bool grid[maxm][maxm];
bool visited[maxm][maxm];

int n;
int c;
vector<int>Count;
int akdmf = 0;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

bool check(int x, int y){
    return 0<=x && x<n && 0<=y && y<n;
}

void dfs(int x, int y){
    for(int i=0 ; i<4 ;i++){
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        if(check(new_x,new_y) && visited[new_x][new_y] == 0 && grid[new_x][new_y] == 1){
            c++;
            visited[new_x][new_y] = 1;
            //cout << new_x <<" " << new_y <<"\n";
            //cout << c << "\n";
            dfs(new_x,new_y);
        }
    }
}

int main() {
    cin >> n;

    for(int i=0;i<n;i++){
        for(int t=0;t<n;t++){
            int a;
            cin >> a;

            grid[i][t] = a;
        }
    }

    for(int i=0;i<n;i++){
        for(int t=0;t<n;t++){
           if(grid[i][t] == 1 && visited[i][t] == 0){
                c = 1;
                visited[i][t] = 1;
                dfs(i,t);
                Count.push_back(c);
                akdmf++;
           }
        }
    }

    cout << akdmf << "\n";

    sort(Count.begin(),Count.end());

    for(int i=0 ; i<akdmf ;i++){
        cout << Count[i] << "\n";
    }

    return 0;
}