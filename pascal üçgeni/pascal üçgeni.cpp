using namespace std;
#include <iostream>
int sutuninput;
int satirinput;
int main()
{
	unsigned long long faktoriyel = 1;
	unsigned long long faktoriyel2 = 1;
	cout << "satır numarasini girin:\n";
	cin >> satirinput;
	cout << "sutun numarasini girin:\n";
	cin >> sutuninput;
	int sutun = sutuninput - 1;
	int satir = satirinput - 1;
	for (sutun; sutun > 0; sutun--) {
		faktoriyel = satir * faktoriyel;
		satir--;
		faktoriyel2 = sutun * faktoriyel2;
	}
	cout << faktoriyel / faktoriyel2;
}

