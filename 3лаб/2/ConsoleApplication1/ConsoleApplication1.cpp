#include <iostream> 
using namespace std;

int main()
{
    int a = 20, c = 160;
    long long int sum = 0;
    

    if (a % 2 != 0) a++;
    int i = a;
        while (i <= c) {
            sum += i * i;
            i += 2;
        }
    cout << "(while)sum=" << sum << "\n";
    sum = 0;
    if (a % 2 != 0) a++;
    i = a;
    do
    {
        sum += i * i;
        i += 2;
    } while (i <= c);
    cout << "(dowhile)sum=" << sum << "\n";

}