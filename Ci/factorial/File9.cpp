//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream.h>
#include <math.h>

int factorial(int number)
{
 int ans;
 if (number == 0) {
	 ans = 1;
	 return ans;
 }
 else
 {
 for (int i = number-1; i > 0; i--) {
	number = number*i;
 }
   ans = number;
   return ans;
 }
}

int main(int argc, char* argv[])
{
	float whole_number;
	float sqrt_;

	cout << "Enter positive number:\n ";
	cin >> whole_number;
	cout << "factorial " << whole_number << "! is ";
	cout << factorial(whole_number);
	cout << ", and sqrt from " << whole_number;
	sqrt_ = sqrt(whole_number);
	cout << " is " << sqrt_ << ".\n";

	system ("pause");
	return 0;
}
//---------------------------------------------------------------------------
