#include <bits/stdc++.h>
using namespace std;

int main()
{
int v1,v2,total;

cin >> v1 >> v2;

if(v1>v2)
{
    total=v1%v2;
}
else if(v1<v2)
{
    total=v2%v1;
}

if(total<0)
{
total*=-1;
}

cout << total;


return 0;
}