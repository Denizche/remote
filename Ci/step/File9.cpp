	//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream.h>
#include <math.h>

int step(int number);
int step(int number, int stepen);

int main(int argc, char* argv[])
{
	int t_number, t_stepen,t_ans;

	cout << "Enter number: ";
	cin >> t_number;
	cout << "Enter degree: ";
	cin >> t_stepen;

	cout << " square is " << step(t_number);

	cout << " your degree is " << step(t_number, t_stepen);

	cout << " \n ";
	system ("pause");
	return 0;
}

int step(int number)
{
number = number*number;
return number;
}
int step(int number,int stepen)
{
 int ans=1;
 while (stepen)
 {
  if () {
      
  }
 }
 }
	 
}
//---------------------------------------------------------------------------
