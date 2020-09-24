

#include <iostream>
using namespace std;
int main()
{
    int x1,x2, y1,y2;
    double res;
    cin >> x1>>y1>>x2>>y2;
    res = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << res;
    
}

