#include <iostream>
using namespace std;

int main(){
	int t, a, b , c;
    cin>>t;

    while(t--){
        cin>>a >>b >>c;

        if(a<=c && a+b<=c){
            cout<<"2"<<endl;
        }
        if(a<=c){
            cout<<"1"<<endl;
        }
        if(a>c && a+b!=c){
            cout<<"0"<<endl;
        }
    }
    

	return 0;
}
