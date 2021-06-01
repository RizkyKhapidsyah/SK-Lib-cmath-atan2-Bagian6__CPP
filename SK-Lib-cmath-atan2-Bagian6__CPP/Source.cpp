// CPP program to demonstrate the atan2()
// errors and exceptions

#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

int main(){
	double x = 0.0, y = 10.0, result;
	result = atan2("1", x);

	cout << "atan2(y/x) = " << result << " radians" << endl;

	cout << "atan2(y/x) = " << result * 180 / 3.141592
		<< " degrees" << endl;

	return 0;
}
