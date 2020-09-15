#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a.size() > 10){
		cout << a[0] << a.size() - 2 << a.back() << "\n";
		}
		else{
		cout << a << "\n";
		}
	}
	return 0;
}
