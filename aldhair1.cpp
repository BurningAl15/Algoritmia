#include <bits/stdc++.h>
using namespace std;

void reporte(int x)
{
	for(int i=0;i<32;i++)
	{
		if((x&(1<<i))>>i==1)
		{
			cout << i << endl;
		}
	}
}

int main()
{
 int n,k;
 cin>>n;
 int arr=0;
 for(int i=0;i<n;i++)
 {
 	cin>>k;
 	arr=arr|1<<k;
 }
 reporte(arr);


return 0;
}

