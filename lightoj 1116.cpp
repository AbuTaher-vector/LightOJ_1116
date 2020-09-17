#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll x,odd,even;
        cin>>x;
        if(x%2!=0) cout<<"Case "<<i<<": Impossible"<<endl;
        else
        {
            odd = x / 2;
		    even = 2;

		   while(odd % 2 == 0) {
			odd = odd / 2;
			even = even * 2;
		   }
			cout<<"Case "<<i<<": "<<odd<<" "<<even<<endl;

        }
    }
}
