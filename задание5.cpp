#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int x1, x2, x3, y1, y2, y3;
    double resAC, resBC,resAB,P,S;
    cout << "������� ���������� ����� A, B, C\n";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    resAC = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    resBC = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    resAB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    P = resAC + resAB + resBC;
    cout << "P=" << P;
    P /= 2;
    S = sqrt(P * (P - resAC) * (P - resAB) * (P - resBC));
    cout << "\nS=" << S;

}