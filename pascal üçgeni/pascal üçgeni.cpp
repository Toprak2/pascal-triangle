using namespace std;
#include <iostream>

int main()
{
	int sutun;
	int satir;

	cout << "enter row number:\n";
	cin >> satir;
	cout << "enter column number:\n";
	cin >> sutun;
	
	int satircons = satir;
	long long int faktoriyel = 1;
	long long int faktoriyel2 = 1;

	int k = sutun;


	for (k; k >= 0; k--) {
		for (sutun; sutun > 0; sutun--) {
			faktoriyel = satir * faktoriyel;
			satir--;
			faktoriyel2 = sutun * faktoriyel2;
			
		}

		sutun = k-1 ;
		satir = satircons;
		cout << faktoriyel / faktoriyel2 << "\t";

		faktoriyel = 1;
		faktoriyel2 = 1;
	}
}
	


	


