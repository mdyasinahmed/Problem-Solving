#include <iostream>
using namespace std;

int main(){
	int t, a, b , c;
    cin>>t;

    while(t--){
        cin>>a >>b >>c;

        if(a<=c){
            if(a<=c && b<=c)
            {
                cout<<"2"<<endl;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
        else{
            cout<<"0"<<endl;
        }
    }
    

	return 0;
}
