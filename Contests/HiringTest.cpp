#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(false); cin.tie(0);
	ll TC;
	cin >> TC;
	while(TC--)
	{
		ll student, problem, X, Y;
        ll fct, pct, uct;
        cin >> student >> problem;
		cin >> X >> Y;
		for(int i=0; i<student; i++)
        {
            int full = 0;
            int par = 0;
            for (int j = 0; j < problem; ++j)
            {
                char x;
                cin >> x;

                if(x == 'F') full++;
                else if(x == 'P') par++;
            }

            if((full >= X) || (full == X-1) && (par >=Y))
                cout << '1';
            else
                cout << '0';
        }
	   	
        cout << endl;
    }

	return 0;
}   