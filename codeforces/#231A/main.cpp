#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int q;
	int p,v,t, count=0;
	cin>>q;
	for(int i = 0; i < q; i++){
		cin>>p>>v>>t;
		if(p+v+t >= 2){
			count++;
		}
	}
	cout << count;
	return 0;
}
