//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <iostream.h>
#include <math.h>

int main(int argc, char* argv[])
{
	int max,j=0;
	float n;

	cout << "Vvedite 10tichnoe chislo: ";
	cin >> n;

	if (n==0)
	 {
	 cout << "0";
	 }

	else
	{
		max=log10(n)/log10(2.0);
			while (max-j>=0)
			{
			   if (n < pow(2.0,max-j))
			   {
				cout<<"0";
				j= j+1;
			   }
			   if (n >= pow(2.0,max-j))
			   {
				cout<<"1";
				n = n - pow(2.0,max-j);
				j= j+1;
			   }
			}
	}
	cout << "\n";
	system("pause");
	return 0;
}
//---------------------------------------------------------------------------
