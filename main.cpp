#include <iostream>
using namespace std;

int main ()
{
	int nilai;
	cout <<"masukan nilai = ";
	cin >> nilai;
	{
		if (nilai >= 8 && nilai <= 10)
		cout <<"A";
		{
			if (nilai >= 6.6 && nilai <= 7)
			cout <<"B";
		}
		{
			if (nilai >= 5 && nilai <= 6.5)
			cout <<"C";
		}
		{
			if (nilai >= 3 && nilai <= 4)
			cout <<"D";
		}
		{
			if (nilai >= 0 && nilai <= 2)
			cout <<"E";
		}
	}
	return 0;
}
