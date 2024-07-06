#include <iostream>

#define MAX_NUM 1000

using namespace std;

int n,m;

int graph[MAX_NUM+1][MAX_NUM+1];
bool vertex[MAX_NUM+1];

void dfs(int v){
    for(int i=1;i<=n;i++){
        if(graph[v][i] && !vertex[i]){
            vertex[i] = true;
            dfs(i);
        }
    }
}

int main() {
    cin >> n >> m;
    
    int count = 0;

    while(m--){
        int a,b;
        cin >> a >> b;
        graph[a][b]=1;
        graph[b][a]=1;
    }

    for(int i=1;i<=n;i++){
        if(vertex[i]==false){
            dfs(i);
            count++;
        }
    }
    
    cout << count;

    return 0;
}