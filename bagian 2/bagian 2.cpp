
#include <iostream>
using namespace std;

int main()
{

	srand(time(0));

	int nBilA, nBilB;
	string status;

	nBilA = rand() % 11;
	nBilB = rand() % 11;

	if (nBilA = nBilB) {
		status = "Bilanganya sama";
	}
	else if (nBilA > nBilB){
		status = "Bilangan A lebih besar dalri bilangan B";
	}
	else
	{
		status = "Bilangan A lebik kecil dari bilangan b";
	}

	cout << "Nlai A: " << nBilA << endl;
	cout << "Nbil b: " << nBilB << endl;
	cout << status;
}

