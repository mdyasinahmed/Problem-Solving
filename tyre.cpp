#include <iostream>
using namespace std;

int main()
{
    int t, n, m, total;
    cin>>t;

    while(t--)
    {
        cin>>n >>m;
        cout<<(total = ((n*2) + (m*4)))<<endl;
    }
	
	return 0;
}
