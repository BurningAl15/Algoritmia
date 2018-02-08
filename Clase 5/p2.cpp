#include <bits/stdc++.h>
#define N(a,b) a&b
#define O(a,b) a|b
#define X(a,b) a^b
#define L(a,b) a<<b
#define R(a,b) a>>b
using namespace std;

int main()
{
freopen("input.txt","r",stdin);

int arr[]={-3,-1,2,5,8,-2,5,-1,-3};
int mejor=0;
int N=sizeof(arr)/sizeof(arr[0]);
int suma=0;

//Solucion 1 O(N**3)
/*
for(int a=0;a<N;a++){
   for(int b=a;b<N;b++)
   {
      int suma=0;
      for(int k=a;k<=b;k++)
  	  suma=suma+arr[k];
      mejor=max(mejor,suma);
   }
}
*/
//Solucion 2 O(N**2)
/*
for(int a=0;a<N;a++)
{
  int suma=0;
   for(int b=a;b<N;b++)
   {
     suma=suma+arr[b];
     mejor=max(mejor,suma);
   }
}
*/
//Solucion 3 O(N)

freopen("output.txt","w",stdout);

for(int a=0;a<N;a++)
{
 suma=max(arr[a],suma+arr[a]);
 mejor=max(mejor,suma);
}
cout << mejor;
fclose(stdout);
return 0;
}