#include <bits/stdc++.h>
using namespace std;

int main()
{
int v1,v2;

cin >> v1 >> v2;

if(v1 <0)
{
  v1*=-1;
}
if(v2<0)
{
  v2*=-1;
}

if(v1>v2)
{
    cout << v1%v2;
}
else if(v1<v2)
{
    cout << v2%v2;
}

return 0;
}