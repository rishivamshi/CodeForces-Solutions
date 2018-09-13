#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a;
	int group[5]={0};
	int ans=0,sum=0;
	for(int i=0;i<n;i++){
		cin >> a;
		group[a]++;
	}
	ans = ans + group[4];
	ans = ans + group[3];
	if(group[1]>group[3])
		group[1] = group[1]-group[3];
	else
		group[1]=0;
	sum=(group[1] + 2*group[2]);
	if(sum%4!=0)
		ans  = ans + 1+(sum)/4;
	else
		ans = ans + (sum)/4;

	cout << ans;
}
