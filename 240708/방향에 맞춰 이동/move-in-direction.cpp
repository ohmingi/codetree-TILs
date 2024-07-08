#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};

    int x = 0;
    int y = 0;

    while(n--){
        char c;
        int a;

        cin >> c;
        cin >> a;

        if(c=='E'){
            x = x + a*dx[0];
            y = y + dy[0];
        }
        else if(c == 'S'){
            x = x + dx[1];
            y = y + a*dy[1];
        }
        else if(c == 'W'){
            x = x + a*dx[2];
            y = y + dy[2];
        }
        else{
            x = x + dx[3];
            y = y + a*dy[3];
        }
    }

    cout << x << " " << y;

    return 0;
}