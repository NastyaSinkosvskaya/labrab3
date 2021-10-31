#include <iostream>
#include <string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int size = n.size();
    int max = 0;
    for (int i = 0;i < size - 1;i++)
    {
        if ((int)n[i] > max)max = (char)n[i]; 
    }
    cout << max - 48;
}