#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, x, count=0, maxC=0;
        cin>>n;
        for(int i = 0; i < n; i++)
        {
            cin>>x;
            if(x==1){
                count=0;
            }else{
                count++;
                maxC=max(count,maxC);
            }
        }
        cout<<maxC<<endl;
    }

    return 0;
}