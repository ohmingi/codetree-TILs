#include <iostream>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for(int t=0;t<n;t++){
            int a;
            cin >> a;
            arr[i][t]=a;
        }
    }

    int count=0;

    if(m==1) {
        cout << 2*n;
        return 0;
    }

    for(int i=0;i<n;i++){
        int cnt=1;
        int cnt1=1;

        bool b=false;
        bool b1=false;

        int c=arr[i][0];
        int c1=arr[0][i];

        for(int t=1;t<n;t++){
            
            if(c==arr[i][t]) cnt++;
            else{
                cnt=1;
            }
            if(c1==arr[t][i]) cnt1++;
            else{
                cnt1=1;
            }

            if(cnt==m && b==false) {
                count++;
                b=true;

            }
            if(cnt1==m && b1==false) {
                count++;
            }

            c=arr[i][t];
            c1=arr[t][i];
        }
    }
    
    cout << count;
}