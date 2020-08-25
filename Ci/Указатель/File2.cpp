#include <iostream.h>
typedef int* IntPtrType;
int main()
{
IntPtrType ptr_a, ptr_b;
ptr_a = new int;
*ptr_a = 4;
ptr_b = ptr_a;
cout << *ptr_a << " " << *ptr_b << "\n";
ptr_b = new int;
*ptr_b = 7;
cout << *ptr_a << " " << *ptr_b << "\n";
delete ptr_a;
ptr_a = ptr_b;
cout << *ptr_a << " " << *ptr_b << "\n";
delete ptr_a;
cin.get();
return 0;
}



