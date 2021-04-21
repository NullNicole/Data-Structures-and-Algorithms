#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

    int n;
    cin >> n;
    int a[n],i,j;
    for(i=0;i<n;i++)
    	cin >> a[i];
   	sort(a,a+n);
   	
   	for(i=0;i<n;i++)
   	{
   		if(a[i]==a[i+1])
   			cout << a[i];
   	}


	return 0;
}
