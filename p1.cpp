#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool a = false, b = false;
	int ans = 0;
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=6;j++)
		{
			for(int k=1;k<=6;k++)
			{
				a = false;
				b = false;
				if(i == 3 || j == 3 || k == 3) a = true;
				if(i == 5 || j == 5 || k == 5) b = true;
				if(a && b)
				{
					cout<<i<<j<<k<<"\n";
					ans++;	
				}
			}
		}
	}
	cout<<ans<<"\n";
	return 0;	
} 
