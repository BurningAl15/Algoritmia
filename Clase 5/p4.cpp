#include <bits/stdc++.h>

using namespace std;

int main()
{
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
srand(time(NULL));
int maxAmount;
cin>>maxAmount;

for(int i=0;i<maxAmount;i++)
{
  cout << i<< " :" << rand()%maxAmount<<endl;
}


return 0;
}