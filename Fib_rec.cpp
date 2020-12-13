#include <iostream>
using namespace std;
void Recur(int W,int X,int Y,int Z)
{
	int V = Y;
	Y+=X;
	X = V;
	W++;
	if (W==Z)
	{
		cout << Y << endl;
	}
	else
	{
		Recur(W,X,Y,Z);
	}
}
int main()
{
	int W=1, X = 0, Y = 1, Z;
	cout << "Please Enter a Number" << endl;
	cin >> Z;

	if (Z==0)
	{
		cout << "0" << endl;
	}
	else if (Z==1)
	{
		cout << "1" << endl;
	}
	else
	{
		Recur (W, X, Y, Z);
	}
}
