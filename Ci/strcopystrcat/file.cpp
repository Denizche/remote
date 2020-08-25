#include <iostream.h>
#include <string.h>
const int MAXIMUM_LENGTH = 80;
int main()
{
char first_string[MAXIMUM_LENGTH];
char second_string[MAXIMUM_LENGTH];

cout << "1st str : ";
cin.getline(first_string,MAXIMUM_LENGTH);
cout << "2nd str : ";
cin.getline(second_string,MAXIMUM_LENGTH);
cout << "before copy str were ";

if ( strcmp(first_string,second_string) )
	cout << "not ";
cout << " the same.\n";
//strcpy( first_string, second_string );
cout << "after copy they became ";
if ( strcmp(first_string,second_string) )
	cout << "not ";
cout << "the same.\n";

strcat( first_string, second_string);

cout << "after some strcat 1st str : ";
cout << first_string;
 system("pause");
return 0;
}