#include <iostream>
#define N(a,b) a&b
#define O(a,b) a|b
#define X(a,b) a^b
#define L(a,b) a<<b
#define R(a,b) a>>b

using namespace std;

int NBit(int a,int b)
{
	int c = 0;
	c = O(c, L(1, b));
	return X(a,c);
}

int main()
{
	//64 16 8 4 2 1
	//010010
	int a = 18;
	/*int d = 0;
	d = O(d, L(1, 1));
	c = X(a, d);*/

	//cout << c << endl;
	cout << NBit(a,4) << endl;
	system("Pause");
	return 0;
}