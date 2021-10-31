#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n = -1;
    int max13 = 0;
    while (n)
    {
        cin >> n;
        if (n > 0 && !(n % 13) && n > max13) max13 = n;
    }
    if (max13 != 0)
        cout << max13 << " ";
    else
        cout << "не кратно 13" << " ";

}