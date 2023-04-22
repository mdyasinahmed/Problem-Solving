#include <iostream>
using namespace std;

int main() 
{
	int t, a, b, first, second;
    cin>>t;

    while(t--)
    {
        cin>>a >>b;
        first = (100*(a/100));
        second = (200*(b/200));

        cout<<first<<endl;
        cout<<second<<endl;
        // if(first>second) cout<<"SECOND"<<endl;
        // else cout<<"FIRST"<<endl;
    }
    

	return 0;
}

