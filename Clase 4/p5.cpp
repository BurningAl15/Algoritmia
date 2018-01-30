#include <bits/stdc++.h>
#define N(a,b) a&b
#define O(a,b) a|b
#define L(a,b) a<<b
#define R(a,b) a>>b
using namespace std;


int main()
{

int a=0;

a=O(a,L(1,1));
cout << a<<endl;
a=O(a,L(1,3));
cout << a<<endl;

int b=0;
b=O(b,L(1,2));
cout << b<<endl;
b=O(b,L(1,3));
cout << b<<endl;
b=O(b,L(1,4));
cout << b<<endl;

int c=0;
c=O(c,L(1,0));
c=O(c,L(1,1));

cout << ~c<<endl;



return 0;
}