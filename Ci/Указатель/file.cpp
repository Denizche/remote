#include <iostream.h>
typedef int* IntPtrType;
int main()
{
IntPtrType ptr_a, ptr_b;
int num_c = 4, num_d = 7;
ptr_a = &num_c; /* ������ 10 (��������� ���_� ������ ������ numc (��������� �� ����) )*/
ptr_b = ptr_a; /* ������ 11  -//- ���_� */
cout << *ptr_a << " A            B " << *ptr_b << "\n";
ptr_b = &num_d; /* ������ 13 */
cout << *ptr_a << " A            B " << *ptr_b << "\n";
*ptr_a = *ptr_b; /* ������ 15 */
cout << *ptr_a << " A            B " << *ptr_b << "\n";
cout << num_c << " C      *&*&*&C " << num_c << "\n" << &num_c << " &num_c" << endl;
system("pause");
return 0;
}