#include<iostream>
using namespace std;

int main()
{
    int n, i, j, x=0, y=0, z=0;
    cin>>n;
    
    int a[n][3];

    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    for(i=0;i<n;i++){
        x += a[i][0];
        y += a[i][1];
        z += a[i][2];
    }

    if(x==y && y==z && x==z && x==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

// https://codeforces.com/problemset/problem/69/A