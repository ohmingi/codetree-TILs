#include <iostream>

#define MAX_NUM 1000

using namespace std;

int n,m;
int count = 0;


int graph[MAX_NUM+1][MAX_NUM+1];
bool vertex[MAX_NUM+1];

void dfs(int v){
    for(int i=1;i<=n;i++){
        if(graph[v][i] && !vertex[i]){
            vertex[i] = true;
            count++;
            dfs(i);
        }
    }
}

int main() {
    cin >> n >> m;

    while(m--){
        int a,b;
        cin >> a >> b;
        graph[a][b]=1;
        graph[b][a]=1;
    }

    visited[1] = true;
    dfs(1);

    cout << count;

    return 0;
}