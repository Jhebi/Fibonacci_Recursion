#include <iostream>
using namespace std;
void Recur(int X,int Y,int Z)
{
	int V = Y;
	Y+=X;
	X = V;
	Z--;
	if (Z==1)
	{
		cout << Y << endl;
	}
	else
	{
		Recur(X,Y,Z);
	}
}
int main()
{
	int X = 0, Y = 1, Z;
	//What place in the Fibonacci Sequence
	A:
	cout << "Please Enter a Number" << endl;
	cin >> Z;

	// address all possible inputs
	if (Z==0)
	{
		// in case they input 0
		cout << "0" << endl;
	}
	else if (Z==1)
	{
		// in case they input 1
		cout << "1" << endl;
	}
	else if (Z<0)
	{
		// incase they input a negative number
		cout << "Invalid Number" << endl;
		goto A;
	}
	else
	{
		// if they input a valid number
		Recur (X, Y, Z);
	}
}
