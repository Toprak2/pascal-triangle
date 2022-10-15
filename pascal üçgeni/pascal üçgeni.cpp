using namespace std;
#include <iostream>

int main()
{
	int sutun;
	int satir;
	
	cout << "satır numarasini girin:\n";
	cin >> satir;
	cout << "sutun numarasini girin:\n";
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

