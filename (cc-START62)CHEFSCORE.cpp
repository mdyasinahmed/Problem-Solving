#include <iostream>
using namespace std;

int main() 
{
	int t, i, n, x, y;
    cin>>t;

    while(t--){
        cin>>n >>x >>y;
        for(i=0;i<n;i++){
            if((n*x)>=y){
                cout<<"YES"<<endl;
            }else cout<<"NO"<<endl;
        }
    }
    

	return 0;
}

