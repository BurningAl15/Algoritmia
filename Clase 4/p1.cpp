#include <bits/stdc++.h>
#define Rep(i,a,b) for(int i=a;i<=b;i++)
using namespace std;



int main()
{
int i,N,s=0;
cin>>N;
Rep(i,1,N)
{
s=s+i;

}
cout << s;
return 0;
}