#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    while (a--)
    {
        int n;
        cin >> n;
        if (n % 4)
        {
            cout << "Not Good"<<endl;
        }
        else
        {
            cout << "Good"<<endl;
        }
    }
    return 0;
}