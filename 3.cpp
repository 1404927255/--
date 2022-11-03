#include<iostream>
using namespace std;
void main()
{
	int A, B, C, X, Y, Z;
	cin >> A >> B >> C;
	for (X = 1; X <= 3;X++)
	{
		for (Y = 1; Y <= 3; Y++)
		{
			for (Z = 1; Z <= 3; Z++)
			{
				if (X != 1 && X != 3 && Z != 3 && X != Y && Y != Z && X != Z)
				{
					cout << X <<' '<< Y<<' ' << Z;
				}
			}
		}
	}
	
}