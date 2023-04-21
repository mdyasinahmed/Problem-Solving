#include <iostream>
using namespace std;

int main()
{
	int t, x, discount;
    cin>>t;

    while(t--)
    {
        cin>>x;
        discount = (100-x);
        cout<<discount<<endl;
    }
    

	return 0;
}
