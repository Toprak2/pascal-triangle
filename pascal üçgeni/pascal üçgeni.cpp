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
	
	unsigned long long faktoriyel = 1;
	unsigned long long faktoriyel2 = 1;

		for (sutun; sutun > 0; sutun--) {
			faktoriyel = satir * faktoriyel;
			satir--;
			faktoriyel2 = sutun * faktoriyel2;
			
		}
		cout << faktoriyel / faktoriyel2;


	
}

