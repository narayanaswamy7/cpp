// https://www.codechef.com/COOK130A/problems/WAV2

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	int n, q;
	cin>>n>>q;
	ll a[n];
	
	for(int i = 0; i < n; i++) {
		cin>>a[i];
	}
	
	sort(a, a+n, greater<int>());
	ll x;
	
	int jump = sqrt(n);
	
	while(q--) {
		cin>>x;
		int pos = 0;
		while(pos+jump < n && a[pos+jump] > x) pos+=jump;
		while(pos<n && a[pos] > x)	pos++;
		
		if(a[pos] == x)
			cout<<"0"<<"\n";
		else if(pos%2==0)
			cout<<"POSITIVE"<<"\n";
		else
		cout<<"NEGATIVE"<<"\n";
	}
	
	return 0;
}
