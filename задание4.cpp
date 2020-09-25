#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int x1, x2, y1, y2;
    int AC, BC;
    cout << "Введите значение координат\n";
    cin >> x1 >> y1 >> x2 >> y2 ;
    AC = abs(x1-x2);
    BC = abs(y1-y2);
    cout << "S=" << AC*BC << "\nP=" << 2*(BC+AC);

}
